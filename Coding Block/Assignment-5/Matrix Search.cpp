#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[30][30];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int x;
    cin >> x;
    int i = 0;
    int j = m - 1;
    while(i < n && j >= 0) {
        if(matrix[i][j] == x) {
            cout << 1;
            return 0;
        }
        else if(matrix[i][j] > x) {
            j--;
        }
        else {
            i++;
        }
    }

    cout << 0;
    return 0;
}