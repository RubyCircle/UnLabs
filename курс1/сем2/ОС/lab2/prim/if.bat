@echo off
IF EXIST auto.bat type auto.bat 

IF NOT EXIST auto.bat COPY ..\temp\auto.bat auto.bat

IF "%1" == "BillGates" ECHO Hey, Billy, you are dressing so funny, hahah.
pause