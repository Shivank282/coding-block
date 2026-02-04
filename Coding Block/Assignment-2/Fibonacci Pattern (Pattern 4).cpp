#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalNumbers = N * (N + 1) / 2;
    long long fib[totalNumbers];

    fib[0] = 0;
    if(totalNumbers > 1) fib[1] = 1;

    for(int i = 2; i < totalNumbers; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int index = 0;
    for(int row = 1; row <= N; row++) {
        for(int col = 1; col <= row; col++) {
            cout << fib[index] << "\t";
            index++;
        }
        cout << endl;
    }

    return 0;
}
