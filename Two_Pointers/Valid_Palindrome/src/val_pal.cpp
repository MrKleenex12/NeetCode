// Larry Wang

// Uses two pointer approach to check for valid palinromes

#include <iostream>

using std::string;

bool is_palindrome(const string &str) {
  int l = 0;
  int r = str.length() - 1;

  while(l < r) {
    while(!isalnum(str[l]) && l < r)
      l++;

    while(!isalnum(str[r]) && l < r)
      r--;

    if(str[l] != str[r])
      return false;
    
    l++;
    r--;
  }

  return true;
}

int main() {
  printf("Enter a word/phrase to see if valid palindrome:\n");


  string line, ans;
  while(std::cin >> line) {
    if(is_palindrome(line))
      ans = "is a";
    else 
      ans = "is not a";

    printf("\"%s\" %s valid palindrome\n", line.c_str(), ans.c_str());
  }
}