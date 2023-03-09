#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
  string s;
  cin >> s;
  int low = 0;
  int up = 0;
  string rs = "";
  for (int i = 0; i < s.length(); i++) {
    if (tolower(s[i]) == s[i]) {
      low++;
    } else if (toupper(s[i]) == s[i]) {
      up++;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (low >= up) {
      char q = tolower(s[i]);
      rs = rs + q;
    } else if (up > low) {
      char q1 = toupper(s[i]);
      rs = rs + q1;
    }
  }
  cout << rs;
  return 0;
}