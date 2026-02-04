#include <iostream>
using namespace std;

int main() {
    int n =7;          
    int mid=n/2;    

    for(int i=0; i <n; i++) {
        int star=0;
        if(i<=mid) {
             star= (2*i+1);
        }
             else{
                star=(2*(n-i-1)+1);
             }
        int blank =(n-star)/2;

        for(int j=0; j<blank; j++) 
        cout<<" ";
        
        for(int j = 0; j<star;j++)
        cout<<"*";
     

        cout << endl;
    }
    return 0;
}