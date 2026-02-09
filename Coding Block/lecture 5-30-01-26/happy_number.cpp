#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            n = sumOfSquares(n);
        }
        return n == 1;
    }
};

int main() {
    int n;
    cin >> n;  

    Solution s;
    if (s.isHappy(n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}