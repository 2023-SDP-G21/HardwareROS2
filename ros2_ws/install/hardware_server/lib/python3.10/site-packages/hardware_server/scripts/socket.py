import socket
from collections import deque
from queue import Queue
import threading


class TCP:
    __ip = "172.20.101.231"
    __port = 5000

    def __init__(self):
        self.__socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.__socket.bind((self.__ip, self.__port))
        self.send_queue = Queue()
        self.receive_queue = deque()

    def send_thread(self):
        while True:
            if not self.send_queue:
                data = self.send_queue.get()
                self.__socket.sendall(data.encode())

    def receive_thread(self):
        while True:
            data = self.__socket.recv(8)
            if not data:
                continue
            speed = int.from_bytes(data[:4],"big")
            angle = int.from_bytes(data[4:],"big")
            self.receive_queue.append((speed,angle))
            print(speed,angle)

    def receive_data(self):
        return self.receive_queue.copy()

    def send_data(self,message):
        self.send_queue.put(message)

    def run(self):
        self.__socket.listen(1)
        print("Waiting for a connection...")
        connection, client_address = self.__socket.accept()
        self.__socket = connection
        self.__socket.setblocking(True)
        print("Connection from", client_address)
        receive_thread = threading.Thread(target=self.receive_thread)
        receive_thread.start()


if __name__ == "__main__":
    server = TCP()
    server.run()
