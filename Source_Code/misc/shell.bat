@echo off
:: open and set-up the shell for building the program.

:: setup the cl compilator.
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

:: create w: disk from directory for easy use.
subst w: /D
subst w: D:\Projects\CNN_Train_Using_PSO\Source_Code
cd /d w:

:: set additional paths.
set PATH=%PATH%;D:\Qt\5.15.2\msvc2019_64\bin

:: echo the message.
echo Everything was set up successfully!

:: remain the cmd opened.
cmd /k