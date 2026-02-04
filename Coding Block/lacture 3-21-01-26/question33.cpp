#include <iostream>
using namespace std;

int main() {
    int n=10;

    for(int i=0;i<n;i++) {

        for(int s=0;s<n-i-1;s++)
            cout<<"  ";

        for(int j=i;j>=1;j--)
            cout<<10-j<<" ";

        cout<<"0 ";

        for(int j=1;j<=i;j++)
            cout<<10-j<<" ";

        cout<<endl;
    }
}