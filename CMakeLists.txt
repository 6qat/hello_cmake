#http://developer.qt.nokia.com/quarterly/view/using_cmake_to_build_qt_projects

PROJECT(hello_cmake)
FIND_PACKAGE(Qt4 REQUIRED)

SET(hello_cmake_SOURCES main.cpp myqtapp.cpp)
SET(hello_cmake_HEADERS myqtapp.h)
SET(hello_cmake_FORMS myqtapp.ui)

QT4_WRAP_CPP(hello_cmake_HEADERS_MOC ${hello_cmake_HEADERS} )
QT4_WRAP_UI( hello_cmake_FORMS_HEADERS ${hello_cmake_FORMS} )

INCLUDE( ${QT_USE_FILE} )
ADD_DEFINITIONS( ${QT_DEFINITIONS} )

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})
INCLUDE_DIRECTORIES(/Users/guiga/Documents/workspace/hello_cmake_lib)

LINK_DIRECTORIES(/Users/guiga/Documents/workspace/hello_cmake_lib/build)

ADD_EXECUTABLE( hello_cmake ${hello_cmake_SOURCES} ${hello_cmake_HEADERS_MOC} ${hello_cmake_FORMS_HEADERS})
TARGET_LINK_LIBRARIES( hello_cmake ${QT_LIBRARIES} mylib)

