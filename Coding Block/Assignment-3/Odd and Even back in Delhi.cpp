#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        long long car;
        cin >> car;

        int evenSum = 0;
        int oddSum = 0;

        while (car > 0) {
            int digit = car % 10;

            if (digit % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;

            car = car / 10;
        }

        if (evenSum % 4 == 0 || oddSum % 3 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
