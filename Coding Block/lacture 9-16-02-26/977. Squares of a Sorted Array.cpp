#include <iostream>
#include <vector>
#include <cmath>   // for abs()

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int n = a.size(), l = 0, r = n - 1;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            if (abs(a[l]) > abs(a[r]))
                ans[i] = a[l] * a[l++];
            else
                ans[i] = a[r] * a[r--];
        }
        return ans;
    }
};
