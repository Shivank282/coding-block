#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of rows to print: ";
    cin>>n;
    //straight
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<"  ";
            
        }
       for(int k=n;k>=i;k--)
       cout<<"*";
       
       cout<<endl;
    }
    //inverted
       for(int i=2;i<=n;i++){
        
        for(int j=n;j>=i;j--){
            cout<<"  ";
            
        }
       for(int k=1;k<=i;k++)
       cout<<"*";
       
       cout<<endl;
    }

    return 0;
}