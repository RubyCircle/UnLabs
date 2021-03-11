REM Show disk C:,D:,E: 
FOR %%A IN (c,d,e) DO dir %%A:*.* 
 
REM Show all txt files
FOR %%f IN (*.txt) DO type %%f  
pause