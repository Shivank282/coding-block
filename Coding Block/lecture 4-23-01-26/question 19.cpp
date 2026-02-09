#include <iostream>
using namespace std;

int main() {
    int n=21;
    int mid=n/2;

    for(int i=0;i<n;i++) {

        int stars;
        int spaces;

        if(i==0||i==n-1) {
            stars=n;        
            spaces=0;
        }
        else if(i<=mid) {
            stars=mid-i+1;
            spaces=2*i-1;
        }
        else {
            stars=i-mid+1;
            spaces=2*(n-i-1)-1;
        }

    
        for(int j=0;j<stars;j++)
            cout<<"* ";

        
        for(int j=0;j<spaces;j++)
            cout<<"  ";

        
        if(spaces>0)
            for(int j=0;j<stars;j++)
                cout<<"* ";

        cout<<endl;
    }
}