SRC = Elemento.cpp \
	  Lista.cpp

OBJ = Elemento.o \
	  Lista.o

all:
	g++ -c ${SRC} -std=c++17
	g++ ${OBJ} main.cpp -std=c++17 -o lista.exe
