#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
  int prenum;
  cin >> prenum;
  for (int i = prenum + 1; i < 1000000; i++) {
    string s = to_string(i);
    if (s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[0] != s[2] && s[0] != s[3] && s[1] != s[3]) {
      cout << s;
      break;
    }
  }
  return 0;
}