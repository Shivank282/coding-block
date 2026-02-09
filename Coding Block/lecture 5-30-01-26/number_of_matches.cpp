#include <iostream>
using namespace std;

class Solution {
    
public:
    int numberOfMatches(int n) {
  
        return n-1;
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.numberOfMatches(n);
    
    return 0;
}