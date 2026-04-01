#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[50000];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int candidate = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = a[i];
        }

        if(a[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    cout << candidate;

    return 0;
}