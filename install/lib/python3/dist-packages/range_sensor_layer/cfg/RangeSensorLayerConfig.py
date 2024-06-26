## *********************************************************
##
## File autogenerated for the range_sensor_layer package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'enabled', 'type': 'bool', 'default': True, 'level': 0, 'description': 'Whether to apply this plugin or not', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'phi', 'type': 'double', 'default': 1.2, 'level': 0, 'description': 'Phi value', 'min': -inf, 'max': inf, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'inflate_cone', 'type': 'double', 'default': 1.0, 'level': 0, 'description': 'Inflate the triangular area covered by the sensor (percentage)', 'min': 0.0, 'max': 1.0, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'no_readings_timeout', 'type': 'double', 'default': 0.0, 'level': 0, 'description': 'No Readings Timeout', 'min': 0.0, 'max': inf, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'clear_threshold', 'type': 'double', 'default': 0.2, 'level': 0, 'description': 'Probability below which cells are marked as free', 'min': 0.0, 'max': 1.0, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'mark_threshold', 'type': 'double', 'default': 0.8, 'level': 0, 'description': 'Probability above which cells are marked as occupied', 'min': 0.0, 'max': 1.0, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'clear_on_max_reading', 'type': 'bool', 'default': False, 'level': 0, 'description': 'Clear on max reading', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}], 'groups': [], 'srcline': 246, 'srcfile': '/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/dynamic_reconfigure/src/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

