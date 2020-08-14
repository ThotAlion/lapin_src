# import launch
# import launch.actions
# import launch.substitutions
# import launch_ros.actions

import os

from ament_index_python.packages import get_package_share_directory
from launch.exit_handler import restart_exit_handler
from ros2run.api import get_executable_path


# def generate_launch_description():
#     return launch.LaunchDescription([
#         launch.actions.DeclareLaunchArgument([
#             'node_prefix',
#             default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
#             description='Prefix for node names'),
#         launch_ros.actions.Node(
#             package='lapin_driver', executable='sensors', output='screen',
#             name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'sensors']),

#     ])

def launch(launch_descriptor, argv):
    ld = launch_descriptor
    package = 'lapin_driver'
    ld.add_process(
        cmd=[get_executable_path(package_name=package, executable_name='sensors')],
        name='sensors',
        exit_handler=restart_exit_handler,
    )
    ld.add_process(
        cmd=[get_executable_path(package_name=package, executable_name='servos')],
        name='servos',
        exit_handler=restart_exit_handler,
    )
    return ld