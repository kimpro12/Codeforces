#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
int main()
{
  string n, k;
  cin >> n >> k;
  string rs = "";
  char a[2][k.length()]; // 2 rows, 7 columns
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < k.length(); j++)
    {
      if (i == 0)
      {
        a[i][j] = n[j];
      }
      else
      {
        a[i][j] = k[j];
      }
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < k.length(); j++) {
      if (a[i][j] != a[i+1][j]) {
        rs = rs + "1";
      } else {
        rs = rs + "0";
      }
    }
    break;
  }
  cout << rs;
  return 0;
}