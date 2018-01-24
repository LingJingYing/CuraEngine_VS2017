# CuraEngine_VS2017
curaengine，master分支的源代码编译，版本忘记了，可直接在vs2017上使用
---------------
注意事项：打开 sln 后，直接生成解决方法会出现错误，需要修改一下路径。<br>
　　1、右键 curaengine 项目 ---> 属性 ---> VC++目录，修改 “包含目录” 和 “库目录” 里的路径，改为本地的路径。<br>
　　2、Debug下：“包含目录” 里的三个路径改为本项目下的 “\curaengine”、“\curaengine\src”、“\curaengine\protobuf_d<br>\include”， “库目录”里的路径改为本项目下的 “\curaengine\protobuf_d\lib”。<br>
　　3、Release下：“包含目录” 里的三个路径改为本项目下的 “\curaengine”、“\curaengine\src”、“\curaengine\protobuf<br>\include”， “库目录”里的路径改为本项目下的 “\curaengine\protobuf\lib”。<br>
　　4、同样在“属性”里，在 “调试” 里，修改 “命令参数” 里的参数。将 “-j”、“-l”、“-o” 参数后的路径分别改为此仓库中包含 “fdmprinter.def.json” 和 “baymax_print.stl” 两个文件所在路径，以及想要gcode文件生成在的路径。<br>
　　5、可以使用了！
