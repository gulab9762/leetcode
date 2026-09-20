@echo off
setlocal enabledelayedexpansion

set "PATH=C:\Users\Gulab\w64devkit\bin;%PATH%"

set "TARGET=%~1"
if "%TARGET%"=="" set "TARGET=cpp\Main.cpp"

if not exist "%TARGET%" (
    echo [Error] File not found: %TARGET%
    exit /b 1
)

echo [Compiling] %TARGET% ...
g++ -std=c++20 "%TARGET%" -o "%~dp0build.exe"
if errorlevel 1 (
    echo [Failed] Compilation errors found above.
    exit /b %errorlevel%
)

echo [Output]
echo ----------------------------------------
"%~dp0build.exe"
set "EXITCODE=%errorlevel%"
echo.
echo ----------------------------------------
echo [Finished with code %EXITCODE%]
