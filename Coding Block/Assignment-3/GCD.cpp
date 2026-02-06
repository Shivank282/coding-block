#include <iostream>
using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    long long N1, N2;
    cin >> N1 >> N2;

    cout << gcd(N1, N2);

    return 0;
}
