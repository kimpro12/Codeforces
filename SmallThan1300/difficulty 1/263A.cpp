#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
  int a[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }
  int aa,b;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (a[i][j] == 1) {
        if (i < 2) {
          aa = 2 - i;
        } else if (i == 2) {
          aa = 0;
        } else {
          aa = i - 2;
        }
        if (j < 2) {
          b = 2 - j;
        } else if (j == 2) {
          b = 0;
        } else {
          b = j - 2;
        }
      }
    }
  }
  cout << aa + b;
  return 0;
}