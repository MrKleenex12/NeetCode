CXX = clang++
CXXFLAGS = -g -Wall -std=gnu++11

bin/anagram_groups: obj/anagram_groups.o
	$(CXX) $(CXXFLAGS) obj/anagram_groups.o -o bin/anagram_groups
obj/anagram_groups.o: src/anagram_groups.cpp
	$(CXX) $(CXXFLAGS) -c src/anagram_groups.cpp -o obj/anagram_groups.o	

clean:
	rm -f bin/*	obj/*