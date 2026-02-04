#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    switch (marks / 10) {
        case 10:   // 100
        case 9:    // 90–99
            cout << "A";
            break;

        case 8:    // 80–89
        case 7:    // 70–79
            if (marks >= 75)
                cout << "B";
            else
                cout << "C";
            break;

        case 6:    // 60–69
            cout << "C";
            break;

        default:   // below 60
            cout << "Fail";
    }

    return 0;
}

