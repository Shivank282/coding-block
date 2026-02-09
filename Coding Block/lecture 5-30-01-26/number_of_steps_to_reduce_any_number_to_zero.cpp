#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;

        while(num > 0) {
            if(num % 2 == 0) {
                num = num / 2;
            } else {
                num = num - 1;
            }
            step++;
        }
        return step;
    }
};

int main() {
    int num;
    cin >> num;

    Solution s;
    cout << s.numberOfSteps(num);

    return 0;
}