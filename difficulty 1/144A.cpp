#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
int main()
{
  int n;
  int min = 1000;
  int max = 0;
  cin >> n;
  int a[n];
  int rs;
  for (int i = 0;i < n; i++) {
    cin >> a[i];
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
  }
  int indexmin;
  int indexmax;
  for (int i = 0; i < n; i++) {
    if (a[i] == min) {
      indexmin = i;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == max) {
      indexmax = i;
      break;
    }
  }
  if (indexmin < indexmax) {
    rs = indexmax + ((n-1) - indexmin) - 1;
  }
  if (indexmin > indexmax) {
    rs = indexmax + (n - 1) - indexmin;
  }
  cout << rs;
  return 0;
}