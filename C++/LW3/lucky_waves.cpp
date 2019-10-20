#include <iostream>
using namespace std;


int main() {
    int n{};
    int len{};
    int max_len{};
    double prevNum{-2147483648};
    double userNum{};
    cin >> n;

    for(int i{}; i < n; i++) {
        cin >> userNum;
        if (userNum > prevNum) {
            if(len == 0 && i != 0) {
                len++;
            }
            len++;
            prevNum = userNum;
        } else if (len > max_len) {
            max_len = len;
            len = 0;
            prevNum = userNum;
        } else {
            len = 0;
            prevNum = userNum;
        }
    }
    if (len > max_len) {
        max_len = len;
    }
    cout << max_len << endl;


    return 0;
}