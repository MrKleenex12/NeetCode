CXX = clang++
CXXFLAGS = -g -Wall -std=c++11
# -------------------------
# This means that when you just type "make", you make all of the executables

# -------------------------
# Executables
bin/dup_int: obj/dup_int.o
	$(CXX) $(CXXFLAGS) obj/dup_int.o -o bin/dup_int

# -------------------------
# Object files
obj/dup_int.o: src/dup_int.cpp  
	$(CXX) $(CXXFLAGS) -c src/dup_int.cpp -o obj/dup_int.o

# -------------------------
# "make clean" deletes the object files and binaries

clean:
	rm -f obj/* bin/*
