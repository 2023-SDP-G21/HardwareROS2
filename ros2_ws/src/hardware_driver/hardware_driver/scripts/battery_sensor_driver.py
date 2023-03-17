from gpiozero import MCP3001


class BatteryLevelSensor:
    def __init__(self) -> None:
        self.max_voltage = 3.3

    def get_battery_level(self):
        with MCP3001(max_voltage=self.max_voltage) as mcp:
            while True:
                voltage = mcp.voltage
                yield voltage/self.max_voltage  # todo


if __name__ == "__main__":
    bls = BatteryLevelSensor()
    print("Battery level: ", next(bls.get_battery_level()))
