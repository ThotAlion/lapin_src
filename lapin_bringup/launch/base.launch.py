import launch
import launch.actions
import launch.substitutions
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='lapin_driver', executable='sensors', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'sensors']),
        launch_ros.actions.Node(
            package='lapin_driver', executable='servos', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'servos']),

    ])
