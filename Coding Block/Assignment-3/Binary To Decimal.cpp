#include <iostream>
using namespace std;

long long binaryToDecimal(long long n) {
    long long decimal = 0;
    long long place = 1; 

    while (n > 0) {
        int lastDigit = n % 10;
        decimal = decimal + lastDigit * place;
        place = place * 2;
        n = n / 10;
    }

    return decimal;
}

int main() {
    long long n;
    cin >> n;

    cout << binaryToDecimal(n);
    return 0;
}
