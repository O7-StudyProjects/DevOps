BUILD_DIR = ./build/
SRC_DIR = ./src/

all : Main Test

Main : $(BUILD_DIR)main.o $(BUILD_DIR)lib.o
	g++ $(BUILD_DIR)main.o $(BUILD_DIR)lib.o -o $(BUILD_DIR)Main

Test : $(BUILD_DIR)test.o $(BUILD_DIR)lib.o
	g++ $(BUILD_DIR)test.o $(BUILD_DIR)lib.o -o $(BUILD_DIR)Test

$(BUILD_DIR)main.o : $(SRC_DIR)main.cpp
	g++ -c $(SRC_DIR)main.cpp -o $(BUILD_DIR)main.o

$(BUILD_DIR)test.o : $(SRC_DIR)test.cpp
	g++ -c $(SRC_DIR)test.cpp -o $(BUILD_DIR)test.o

$(BUILD_DIR)lib.o : $(SRC_DIR)lib.cpp
	g++ -c $(SRC_DIR)lib.cpp -o $(BUILD_DIR)lib.o


clean : 
	rm $(BUILD_DIR)Main $(BUILD_DIR)*.o
