@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
cd /d %1
set compilerflags=/Od /Zi /EHsc /Wall /std:c++14
set linkerflags=/Fe:.build/main.exe
cl.exe %compilerflags% %2 %linkerflags%
del %3.obj