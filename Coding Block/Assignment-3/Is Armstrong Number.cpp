#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    if (n == 0) return false; 

    int sum = 0, temp = n, digits = 0;

    for (int t = n; t > 0; t /= 10) digits++;
    for (; temp > 0; temp /= 10)
        sum += pow(temp % 10, digits);

    return sum == n;
}

int main() {
    int n;
    cin >> n;
    cout << (isArmstrong(n) ? "true" : "false");
}
