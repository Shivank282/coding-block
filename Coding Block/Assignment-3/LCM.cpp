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

long long lcm(long long n1, long long n2) {
    return (n1 / gcd(n1, n2)) * n2;
}

int main() {
    long long N1, N2;
    cin >> N1 >> N2;

    cout << lcm(N1, N2);

    return 0;
}
