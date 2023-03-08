#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
  string s;
  cin >> s;
  if (toupper(s[0]) != s[0]) {
    char capital = toupper(s[0]);
    s[0] = capital;
  }
  cout << s;
  return 0;
}