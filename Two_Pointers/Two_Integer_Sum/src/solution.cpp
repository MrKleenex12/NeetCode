// Larry Wang Neetcode Practice

/* Uses two pointer approach to find index1 and index2 where
index1 + index2 == target */

#include <iostream>
#include <vector>

void usage() {
  fprintf(stderr, "usage: bin/solution size target\n");
  exit(1);
}

void target_error() {
  fprintf(stderr, "usage: calculating target is not possible\n");
  exit(1);
}

std::vector<int> twoSum(const std::vector<int> &numbers, const int target) {
  int l = 0;
  int r = numbers.size() - 1;

  while(l < r) {
    int sum = numbers[l] + numbers[r];

    if(sum > target)      r--;
    else if(sum < target) l++;
    else                  return {l+1, r+1};
  }
  
  return {0, 0};
}

int main(int argc, char **argv) {
  if(argc != 3)   usage();
  
  int size = *argv[1] - '0';
  int target = *argv[2] - '0';

  if(target > size * 2 - 1 || target < 3)   target_error();
  
  std::vector<int> v(size);
  for(int i = 0; i < size; i++)   v[i] = i+1;

  v = twoSum(v, target);
  printf("{%d, %d}\n", v[0], v[1]);

}