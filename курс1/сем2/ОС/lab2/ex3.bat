@echo off
chcp 1251 >nul
IF %1.==. GOTO No

start %1 
GOTO Yes

:No
echo Path is empty
:Yes
pause