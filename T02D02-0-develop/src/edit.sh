#!/bin/bash

echo "Введите путь до файла => "
read filename
echo "Введите заменяемую строку => "
read search
echo "Введите текст для замены => "
read replace

if [ -f $filename ]; then
	if [ -e $filename ]; then
		sed -i '' "s/$search/$replace/g" $filename

		date_of_file=$(date -r $filename +"%Y-%m-%d %H:%M")
		size_of_file=$(wc -c $filename | awk '{print $1}')
		hash_of_file=$(shasum -a 256 $filename | awk '{print $1}')
		
		echo "$filename - $size_of_file - $date_of_file - $hash_of_file - sha256" >> files.log
	fi
	echo "Замена строки произошла успешно!"
fi
