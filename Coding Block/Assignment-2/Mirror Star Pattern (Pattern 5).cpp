#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i < N; i++) {

        int stars;
        if (i <= mid)
            stars = 2 * i + 1;
        else
            stars = 2 * (N - i - 1) + 1;

        int tabs = (N - stars) / 2;

        // Leading tabs
        for (int t = 0; t < tabs; t++) {
            cout << "\t";
        }

        // Stars
        for (int s = 0; s < stars; s++) {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}
