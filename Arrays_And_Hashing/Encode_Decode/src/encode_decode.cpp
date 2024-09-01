/*
class Solution {
public:
    string encode(vector<string>& strs) {
        string full_list = "";
        for(string i : strs)
            full_list += (i + '=');
        
        return full_list;
    }

    vector<string> decode(string s) {
        
        vector<string> result;
        string temp = "";
        for(char c : s) {
            if(c != '=')
                temp += c;
            else {
                result.push_back(temp);
                temp = "";
            }
        }

        return result;
    }
};
*/

#include <iostream>
#include <vector>

using std::string;
using std::vector;


string encode(vector<string>& strs) {
    string full_list = "";
    for(string i : strs)
        full_list += (i + '=');
    
    return full_list;
}

vector<string> decode(string s) {
        
    vector<string> result;
    string temp = "";
    for(char c : s) {
        if(c != '=')
            temp += c;
        else {
            result.push_back(temp);
            temp = "";
        }
    }

    return result;
}

int main() {
    vector<string> test = {"neet","code","love","you"};
    string s = encode(test); 
    printf("string: %s\n", s.c_str());

    vector<string> temp = decode(s);

    for(string str : temp)
        printf("%s ", str.c_str());
    printf("\n");
    return 0;
}