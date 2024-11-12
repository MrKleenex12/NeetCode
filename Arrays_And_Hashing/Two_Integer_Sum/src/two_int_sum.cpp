/* Larry Wang
 *
 * 7/25/24
 *
*/

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
    }
};
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
using std::unordered_map;
using std::vector;
using std::pair;


vector<int> twoSum(const vector<int> &nums, const int target) {
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) {
            
        int complement = target - nums[i];
        if(mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        mp.insert({nums[i], i});
    }
    return {0, 0};
}


int main() {
    vector<int> vec = {1, 2, 3, 4};
    size_t size = vec.size();
    int target = 10;   
    vector<int> result = twoSum(vec, target);
    
    printf("{");
    for(size_t i = 0; i < size - 1; i++)
        printf("%zu, ", i);
    printf("%d}\ntarget: %d\n", vec[size - 1],target);

    printf("\nresult: {%d, %d}\n", result[0], result[1]);
}
