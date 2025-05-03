BUILD_DIR = ./build/
SRC_DIR = ./src/

$(BUILD_DIR)Main : $(BUILD_DIR)main.o
	g++ $(BUILD_DIR)main.o -o $(BUILD_DIR)Main

$(BUILD_DIR)main.o : $(SRC_DIR)main.cpp
	g++ -c $(SRC_DIR)main.cpp -o $(BUILD_DIR)main.o

clean : 
	rm $(BUILD_DIR)Main $(BUILD_DIR)*.o