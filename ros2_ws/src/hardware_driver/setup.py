from setuptools import setup

package_name = 'hardware_driver'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    py_modules=[
        package_name+'.scripts.ultrasonic_driver',
        package_name+'.scripts.motor_driver',
        package_name+'.scripts.imu_driver',
        package_name+'.scripts.battery_sensor_driver',
        package_name+'.scripts.led_driver',
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='you',
    maintainer_email='hobart.yang@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motor_actuator_node = ' + package_name + '.motor_actuator_node:main',
            'imu_sensor_node = ' + package_name + '.imu_sensor_node:main',
            'ultrasonic_sensor_node = ' + package_name + '.ultrasonic_sensor_node:main',
            'battery_sensor_node = ' + package_name + '.battery_sensor_node:main',
            'led_actuator_node = ' + package_name + '.led_actuator_node:main',
        ],
    },
)
