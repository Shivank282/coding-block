#include <iostream>
using namespace std;

int main() {
    int n =7;          
    int mid=n/2;    

    for(int i=0; i <n; i++) {
        int blanks=(i<=mid)?(2*i+1):(2*(n-i-1)+1);
        int stars =(n-blanks)/2;

        for(int j=0; j<stars; j++) 
        cout<<"*";
        
        for(int j=0; j<blanks;j++)
        cout<<" ";
        
        for(int j=0; j<stars; j++)
        cout<< "*";

        cout << endl;
    }
    return 0;
}