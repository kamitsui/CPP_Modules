#!/bin/bash
DIR_HTML='html'

read -p "Run doxygen (y/n): " yn
if [[ ${yn} == "y" ]]; then
	doxygen Doxyfile
fi

read -p "Staticrypt (y/n): " yn
if [[ ${yn} == "y" ]]; then
	npx staticrypt ${DIR_HTML}/ -r -d ${DIR_HTML}
fi

read -p "Preview (y/n): " yn
if [[ ${yn} == "y" ]]; then
	(cd ${DIR_HTML};\
			python3 -m http.server 8000)
fi
