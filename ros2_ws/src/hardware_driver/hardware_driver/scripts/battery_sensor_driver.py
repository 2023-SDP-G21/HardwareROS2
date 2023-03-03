from gpiozero import MCP3001


class BatteryLevelSensor:
    def __init__(self) -> None:
        pass

    def _get_battery_voltage(self):
        with MCP3001(max_voltage=5.5) as mcp:
            return mcp.voltage

    def get_battery_level(self):
        voltage = self._get_battery_voltage()
        return voltage/5.5  # todo


if __name__ == "__main__":
    bls = BatteryLevelSensor()
    print(bls.get_battery_level())
