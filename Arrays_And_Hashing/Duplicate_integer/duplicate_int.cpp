/* Larry Wang
 * 
 * 7/24/24
 *
*/

/*  NeetCode solution 
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s0;
        for(int num : nums) {
            if(s0.find(num) != s1.end())
                return true;
            s0.insert(num);
        }
        return false;
    }
};
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
    
using std::unordered_set;
using std::vector;
using std::set;


bool hasDuplicate(vector<int>& nums) {
    set<int> s1;
    for(int num : nums) {
        if(s1.find(num) != s1.end())
            return true;
        s1.insert(num);
    }
    return false;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5, 4};
    printf("%d\n", hasDuplicate(v1));
}
