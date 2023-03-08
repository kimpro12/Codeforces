#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string borzeCode;
    cin >> borzeCode;
 
    string ternaryNum = "";
    for (int i = 0; i < borzeCode.length(); i++) {
        char c = borzeCode[i];
        if (c == '.') {
            ternaryNum += "0";
        } else if (c == '-') {
            i++;
            char nextC = borzeCode[i];
            if (nextC == '.') {
                ternaryNum += "1";
            } else if (nextC == '-') {
                ternaryNum += "2";
            }
        }
    }
 
    cout << ternaryNum << endl;
 
    return 0;
}