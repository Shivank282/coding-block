#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 3 == 0 && N % 7 == 0) {
        cout << "Yes";
    } 
    else {
        cout << "No";
    }

    return 0;
}
