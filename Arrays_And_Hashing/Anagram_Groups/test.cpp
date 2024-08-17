/*  Larry Wang

    7/25/24
    
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using std::vector;
using std::unordered_map;
using std::string;


vector<vector<string>> groupAnagrams(vector<string> &strs) {
    
    for(string s : strs) {
    	vector<int> count(26,0);
    	for(char c : s) 
    		count.push_back(c - 'a');
    	
    }
}


int main() {
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
	
}
