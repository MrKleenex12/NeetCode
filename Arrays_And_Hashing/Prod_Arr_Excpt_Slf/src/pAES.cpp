/*
vector<int> productExceptSelf(vector<int>& nums) {
    const int size = nums.size();
    vector<int> result(size, 1);

    int temp = 1;
    for(int i = 0; i < size; i++) {
        result[i] = temp; 
        temp *= nums[i];
    }

    temp = 1;
    for(int i = size - 1; i >= 0; i--) {
        result[i] *= temp;
        temp *= nums[i];
    }

    return result;
}
*/

#include <iostream>
#include <vector>

using std::vector;

vector<int> productExceptSelf(vector<int>& nums) {
    const int size = nums.size();
    vector<int> result(size, 1);

    int temp = 1;
    for(int i = 0; i < size; i++) {
        result[i] = temp; 
        temp *= nums[i];
    }

    temp = 1;
    for(int i = size - 1; i >= 0; i--) {
        result[i] *= temp;
        temp *= nums[i];
    }

    return result;
}

int main() {
    vector<int> vec = {1,2,4,6};
    vec = productExceptSelf(vec);

    for(int i : vec)
        printf("%d ", i);
    printf("\n");
    
    return 0;
}