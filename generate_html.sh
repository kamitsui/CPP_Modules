#!/bin/bash
DIR_HTML='html'

doxygen Doxyfile

read -p "Preview (y/n): " yn
if [[ ${yn} == "y" ]]; then
	cd ${DIR_HTML}
	python3 -m http.server 8000
fi
