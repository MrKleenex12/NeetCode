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
	$(CXX) $(CXXFLAGS) -o $(ex_file) $(obj_file)

# -------------------------
# Object Files
$(obj_file): $(main_file)
	$(CXX) $(CXXFLAGS) -o $(obj_file) -c $(main_file)

# -------------------------
# "make clean" deletes the object files and binaries
clean:
	rm -f obj/* bin/*