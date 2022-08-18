#!/bin/bash

echo "Укажите путь к файлу: "
read path_of_file

if [ -f $path_of_file ]; then
	quantity_data=`wc -l $path_of_file | awk '{print $1}'`
	unique_files=`sort $path_of_file | uniq -u | wc -l | awk '{print $1}'`
	amount_of_change=`sort $path_of_file | awk '{print $8}' | uniq -u | wc -l | awk '{print $1}'`

	echo $quantity_data $unique_files $amount_of_change 
fi
