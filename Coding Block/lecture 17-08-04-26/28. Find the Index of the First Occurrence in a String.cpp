#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    
    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++) {
        int k = i;
        int j = 0;

        while (j < m && haystack[k] == needle[j]) {
            k++;
            j++;
        }

        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    string haystack, needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    int result = strStr(haystack, needle);

    cout << "First occurrence index: " << result << endl;

    return 0;
}