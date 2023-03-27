from setuptools import setup

package_name = 'hardware_server'

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
        package_name+'.HardwareServer.hardware_server.tcp',
        package_name+'.HardwareServer.hardware_server.bluetooth',
        package_name+'.HardwareServer.hardware_server.data',
        package_name+'.HardwareServer.hardware_server.header',
        package_name+'.HardwareServer.hardware_server.message_generation',
        package_name+'.HardwareServer.hardware_server.packet',
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
            'socket_node = ' + package_name + '.socket_node:main',
        ],
    },
)
