#LIBARIES := 
#INCLUDES :=
<<<<<<< HEAD
FOLDERS	 :=	src/*.cpp src/*/*.cpp
=======
FOLDERS	 :=	src/*.cpp src/*/*.cpp src/*/*/*.cpp
>>>>>>> aeae18264e4b86dcb0f1a5167a0286cbcc84bce3
FILES	 := main.cpp
all:
	g++	-g	-std=c++17	-Wall	$(INCLUDES)	$(FOLDERS)	$(FILES)	-o	main