from setuptools import setup

package_name = 'lapin_driver'

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
    maintainer='tpeyruse',
    maintainer_email='thomas.peyruse@gmail.com',
    description='driver for biped robot',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sensors = lapin_driver.sensorLoop:main',
            'servos = lapin_driver.servoLoop:main',
        ],
    },
)
