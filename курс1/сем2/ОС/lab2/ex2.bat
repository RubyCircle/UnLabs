@echo off
md temp\batfile\
copy con temp\batfile\file.txt
type temp\batfile\file.txt
pause