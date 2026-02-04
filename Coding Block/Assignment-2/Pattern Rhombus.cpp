#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalRows = 2 * N - 1;

    for (int i = 1; i <= totalRows; i++) {

        int row = (i <= N) ? i : totalRows - i + 1;

       for (int s = 1; s <= N - row; s++) {
            cout << "\t";
        }
        int num = row;
        for (int j = 1; j <= row; j++) {
            cout << num << "\t";
            num++;
        }
        num -= 2;
        for (int j = 1; j < row; j++) {
            cout << num << "\t";
            num--;
        }

        cout << endl;
    }

    return 0;
}
