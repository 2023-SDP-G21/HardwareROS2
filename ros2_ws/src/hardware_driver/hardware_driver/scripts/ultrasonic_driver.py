# Importing modules and classes
import time
from gpiozero import DigitalInputDevice, DigitalOutputDevice

# Defining sensor class
class UltraSonicDriver:
  
    def __init__(self, echo, trigger):
        # Assingning ultrasonic sensor echo and trigger GPIO pins
        self._usoundecho = DigitalInputDevice(echo)
        self._usoundtrig = DigitalOutputDevice(trigger)
        # Assigning speed of sound (cm/s)
        self.speedofsound = 34300

    @property
    def distance(self):
        # Sending trigger pulse (~10 us)
        self._usoundtrig.on()
        time.sleep(0.000010)
        self._usoundtrig.off()
        # Detecting echo pulse start
        restart_count = 0
        while self._usoundecho.value == 0:
            restart_count += 1
            if restart_count == 10000:
                # print("Restart")
                return self.distance
            continue
        trise = time.perf_counter()
        # Detecting echo pulse end
        while self._usoundecho.value == 1:
            continue
        tfall = time.perf_counter()
        # prevent error
        if tfall == 0 or trise == 0:
            return self.distance
        # Returning distance (cm)
        return 0.5 * (tfall-trise) * self.speedofsound

    @distance.setter
    def distance(self, _):
        print('"distance" is a read only attribute.')

    def __del__(self):
        self._usoundecho.close()
        self._usoundtrig.close()

if __name__=='__main__':
    # Assigning some parameters
    tsample = 1/30  # Sampling period for code execution (s)
    tstop = 20  # Total execution time (s)
    # Creating ultrasonic sensor object
    usensor = UltraSonicDriver(echo=6, trigger=5)
    # Initializing variable and starting main clock
    tcurr = 0
    tstart = time.perf_counter()

    # Execution loop
    print('Running code for', tstop, 'seconds ...')
    while tcurr <= tstop:
        print('Waiting for sensor...')
        time.sleep(tsample)
        # Getting current time (s)
        tcurr = time.perf_counter() - tstart
        # Displaying measured distance
        print(f"Distance = {usensor.distance} cm")

    print('Done.')
    # Deleting sensor
    del usensor 