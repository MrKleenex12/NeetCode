/*  Larry Wang
 *
 *  7/27/24
 *
 *  Remember that the first argument for dictionaries/maps has to be primitive. 
 *  Create a 26 char long string that has the number of letters in order of the 
 *  alphabet. 
 *
 *  EX:
 *
 *  ticket ----> "001010001010000000020000000"
 *
 *  Then you can store it in a map. The second argument can be the vector that 
 *  holds all the anagrams of those letters
 *
 *  
 *
 *  PLACE a separater inbetween the characters to differentiate even more
 *
 *  
 *  EX: vector<string> strs = {"bdddddddddd","bbbbbbbbbbc"}; 
 *  
 *  WITHOUT PRODUCES:  
 *      010100000000000000000000000
 *      010100000000000000000000000
 *  WITH PRODUCES: 
 *      -0-1-0-10-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0
 *      -0-10-1-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0
*/


#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>


using std::vector;
using std::unordered_map;
using std::string;
using std::sort;


vector<vector<string>> groupAnagrams(vector<string> &strs) {
    
    unordered_map<string, vector<string>> ans;
    for(string s : strs) {
		vector<int> letters(26,0);
    	for(char c : s) 
    		letters[c - 'a']++;
    	
    	string temp;
    	for(int i : letters)
    		temp += "-" + std::to_string(i);
        printf("%s\n", temp.c_str());
    	
    	ans[temp].push_back(s);
    }
    
    vector<vector<string>> final_result;
    for(auto& anagram : ans)
    	final_result.push_back(anagram.second);
    
    return final_result;
}


int main() {
    //vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    vector<string> strs = {"bdddddddddd","bbbbbbbbbbc"};

	vector<vector<string>> rslt = groupAnagrams(strs);
    sort(rslt.begin(), rslt.end());
	for(auto& anagrams : rslt) {

        sort(anagrams.begin(), anagrams.end());
		printf("Anagrams: ");
		for(string s : anagrams)
			printf("%s ", s.c_str());
		printf("\n");
	} 	   
}
