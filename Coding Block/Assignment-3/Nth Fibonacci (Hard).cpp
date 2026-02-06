#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
        return 0;
    }

    if (N == 1) {
        cout << 0;
        return 0;
    }

    long long a = 0, b = 1, c;

    for (int i = 2; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;
    return 0;
}
