@echo off

::获取SciterSDK路径
set SciterSDK=%ENV_SciterSDK%

::获取打包程序packfolder.exe路径
set PackFolderEXE="%SciterSDK%\bin.win\packfolder.exe"

::获取资源文件夹路径
set ResPath="./res"

::调用打包程序
%PackFolderEXE% %ResPath% resources.cpp -v "resources"

pause