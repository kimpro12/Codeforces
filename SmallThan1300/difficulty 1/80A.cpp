#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

bool is_prime(int num) {
  if (num < 2) {
    return false;
  }
  for (int i = 2; i*i <= num; ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
    int n, k;
    vector<int> list;
    cin >> n >> k;
    for (int i = 0; i < 51; i++) {
        if (is_prime(i)) {
            list.push_back(i);
        }
    }
    int index;
    for (int i = 0; i < list.size();i++) {
        if (list[i] == n) {
            index = i;
        }
    }
    for (int i = 0; i < list.size();i++) {
        if (list[index + 1] == k) {
            cout << "YES";
            break;
        } else {
            cout << "NO";
            break;
        }
    }
    return 0;
}