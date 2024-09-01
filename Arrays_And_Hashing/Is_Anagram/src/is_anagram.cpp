/* Larry Wang   
 * 
 * 7/25/24
 *
 * Unordered_maps are slightly faster than maps while giving same results.
 * No need for alphabetical/ascending order.
 *
*/


/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())    return false;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(int i = 0; i < s.length(); i++) {
        m1[s[i]]++; 
        m2[t[i]]++; 
        }

        return (m1 == m2);
    }
};
*/


#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using std::map;
using std::unordered_map;
using std::string;


bool is_anagram(string const s, string const t) {
    
    if(s.length() != t.length())    return false;

    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    for(int i = 0; i < s.length(); i++) {
       m1[s[i]]++; 
       m2[t[i]]++; 
    }

    return (m1 == m2);
}


int main() {
    
    string s1 = "racecar";
    string s2 = "carrace";

    /*
    for(char c : s1) {
        printf("%c", c);
    }
    printf("\n");
    */
    
    printf("Comparison of two unordered maps:%d\n", is_anagram(s1,s2));
}
