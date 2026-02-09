#include <iostream>
using namespace std;

int main() {
    int n=7;
    int mid=n/2;

    for (int i=0;i<n;i++) {

        int d=0;
        if(i<=mid) {
         d=i;   
        } 
         else{
         d=(n-1-i);
         }
        for (int j=0; j<n; j++) {
    
            if (j==mid - d || j==mid + d) {
                cout<<"*";  
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}