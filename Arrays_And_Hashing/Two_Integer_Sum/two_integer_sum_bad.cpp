/* Larry Wang
 *
 * 7/25/24
 *
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
        if(mp.find(complement) != mp.end()) 
            return {mp[complement], i};

        mp.insert({nums[i], i});
    }
    return {0, 0};
}

int main() {
    vector<int> vec = {1, 2, 3, 4};
    int target = 7;   
    vector<int> result = twoSum(vec, target);
    
    printf("{");
    for(auto i : vec)
        printf("%d ", i);
    printf("}\ntarget: %d\n", target);

    printf("\nresult: {%d, %d}\n", result[0], result[1]);
}
