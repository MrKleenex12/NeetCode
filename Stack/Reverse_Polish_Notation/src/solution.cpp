#include <iostream>
#include <string>
#include <stack>
#include <vector>

using std::string;
using std::vector;

int calculate(const char &c, const int &first, const int &second) {
  if(c == '+') {
    return first + second;
  }
  else if(c == '-') {
    return first - second;
  }
  else if(c == '*') {
    return first * second;
  }
  else {
    return first / second;
  }
}

int main() {
  vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
  std::stack<int> stk;

  int first, second;

  for(size_t i = 0; i < tokens.size(); i++) {
    char c = tokens[i][0];
    if(isdigit(c)) {
      stk.push(stoi(tokens[i]));
    }
    else {
      second = stk.top();
      stk.pop(); 
      first = stk.top();
      stk.pop();
      stk.push(calculate(c, first, second));
      printf("%zu - %d\n", i, stk.top());
    }
  }

  printf("%d\n", stk.top());
}