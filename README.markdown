# How to compile :

* Create a build directory and "cd" into it.
* cmake ..
* make

## Output showing dynamic libraries dependenciesi before linking to mylib:

air:build guiga$ otool -L hello_cmake 
hello_cmake:
	/Users/guiga/QtSDK/Desktop/Qt/474/gcc/lib/QtGui.framework/Versions/4/QtGui (compatibility version 4.7.0, current version 4.7.4)
	/Users/guiga/QtSDK/Desktop/Qt/474/gcc/lib/QtCore.framework/Versions/4/QtCore (compatibility version 4.7.0, current version 4.7.4)
	/usr/lib/libstdc++.6.dylib (compatibility version 7.0.0, current version 52.0.0)
	/usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 159.0.0)

