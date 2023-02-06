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
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='you',
    maintainer_email='hobart.yang@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motor_actuator_node_action_server = ' + package_name + '.motor_actuator_node_action_server:main',
            'motor_actuator_node_action_client = ' + package_name + '.motor_actuator_node_action_client:main',
            'imu_sensor_node = ' + package_name + '.imu_sensor_node:main',
        ],
    },
)
