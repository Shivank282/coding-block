#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        int len = s.length();
        int decimal = 0;

        for(int i = 0; i < len; i++) {
            if(s[i] == '1') {
                decimal += pow(2, len - i - 1);
            }
        }

        cout << decimal << endl;
    }

    return 0;
}