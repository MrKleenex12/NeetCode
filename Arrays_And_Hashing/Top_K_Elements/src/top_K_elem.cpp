#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void print_bucket(const vector<vector<int>> &nums) {
	for(int i = 1; i < nums.size(); i++) {
        
        printf("index: %d - ", i);
		for(int j = 0; j < nums[i].size(); j++) 
			printf("%d ", nums[i][j]);
		printf("\n");
	}
}


int main() {
    
    const vector<int> nums = {1, 2, 2, 3, 3, 3};

    unordered_map<int, int> mp;

    for(int i : nums)
        mp[i]++;


	vector<vector<int>> count(nums.size() + 1);
    for(int i = 0; i < count.size(); i++) {
		count[i].resize(0);
	}
    
    for(auto i : mp) {
        count[i.second].push_back(i.first);
    }

    print_bucket(count);
}
