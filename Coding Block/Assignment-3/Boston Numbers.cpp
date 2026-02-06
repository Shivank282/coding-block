
#include <iostream>
using namespace std;
// Function to calculate sum of digits
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    int originalDigitSum = digitSum(n);
    int factorDigitSum = 0;
    int temp = n;
    bool isComposite = false;
    // Prime factorization
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            isComposite = true;
            factorDigitSum += digitSum(i);
            temp = temp / i;
        }
    }
    // Agar last me prime factor bach gaya ho
    if (temp > 1) {
        if (temp != n)   // means composite
            isComposite = true;
        factorDigitSum += digitSum(temp);
    }
    // Boston number check
    if (isComposite && originalDigitSum == factorDigitSum) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}