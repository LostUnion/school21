sh ai_door_management_module.sh
mv door_management_fi door_management_file
cd door_management_files
mkdir door_configuration
mkdir door_map
mkdir door_logs
mv *.conf door_configuration
mv *.log door_logs
mv door_map_1.1 door_map
cd..
chmod +x ai_door_control.sh
ai_door_management_module.sh
