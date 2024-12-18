#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using std::string;
using std::vector;
using std::unordered_map;
using std::pair;

int main(int argc, char **argv) {
  int n, total_len;

  std::cin >> n;
  total_len = 2 * n;
  
  vector<string> v = {"("};
  vector<pair<int, int> > parenth = {{1,0}};

  for(int i = 0; i < v.size(); i++) {
    string s = v[i];  
    int open = parenth[i].first; 
    int close = parenth[i].second; 

    while(open < n) {
      if(open > close) {
        v.push_back(s + ")");
        parenth.push_back({open, close + 1});
      }
      s += "(";
      open++;
    } 

    for(int i = s.length(); i < total_len; i++) {
      s.push_back(')');
      close++;
    }
    v[i] = s;
    parenth[i] = {open, close};
  }

  for(auto s : v) {
    printf("%s\n", s.c_str());
  }
}