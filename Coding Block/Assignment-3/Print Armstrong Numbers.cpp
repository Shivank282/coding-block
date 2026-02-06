#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == original;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++) {
        if (i >= 100 && isArmstrong(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
