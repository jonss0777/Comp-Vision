# OpenCV root directory
OPENCV_DIR = C:\OpenCV\opencv

# Include directory
INCLUDES = /I"$(OPENCV_DIR)\build\include"

# Library directory
LIBPATHS = /LIBPATH:"$(OPENCV_DIR)\build\x64\vc16\lib"

# OpenCV world library (Release)
LIBS = opencv_world4110.lib

# Source file(s)
SRC = main.cpp

# Output name
OUT = app.exe

all:
	cl /EHsc $(INCLUDES) $(SRC) /Fe$(OUT) $(LIBPATHS) $(LIBS)

clean:
	del *.obj
	del $(OUT)
