#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++) {
            cout << "   ";
        }

        for(int k = 1; k <= (2*i - 1); k++) {
            count++;

            if(count < 10)
                cout << "  " << count;  
            else
                cout << " " << count;   
        }

        cout << endl;
    }

    return 0;
}