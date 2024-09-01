CXX = clang++
CXXFLAGS = -g -Wall -std=c++11
# -------------------------
# This means that when you just type "make", you make all of the executables

# -------------------------
# variables
main_file := src/encode_decode.cpp
obj_file := obj/encode_decode.o
ex_file := bin/encode_decode
# -------------------------
# Executables
$(ex_file): $(obj_file)
	$(CXX) $(CXXFLAGS) $(obj_file) -o $(ex_file)
# -------------------------
# Object files
$(object_file): $(main_file)
	$(CXX) $(CXXFLAGS) -c $(main_file) -o $(object_file)
# -------------------------
# "make clean" deletes the object files and binaries

clean:
	rm -f obj/* bin/*
