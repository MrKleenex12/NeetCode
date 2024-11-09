CXX = clang++
CXXFLAGS = -g -Wall -std=c++11
# -------------------------
# This means that when you just type "make", you make all of the executables

# -------------------------
# variables
main_file := src/solution.cpp
obj_file := obj/solution.o
ex_file := bin/solution

# -------------------------
# Executables
$(ex_file): $(obj_file)
	$(CXX) $(CXXFLAGS) $(obj_file) -o $(ex_file)

# -------------------------
# Object files
$(obj_file): $(main_file)
	$(CXX) $(CXXFLAGS) -c $(main_file) -o $(obj_file)

# -------------------------
# "make clean" deletes the object files and binaries
clean:
	rm -f obj/* bin/*
