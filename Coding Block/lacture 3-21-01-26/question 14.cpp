
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of rows to print: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
       for(int k=1;k<=i;k++)
       cout<<"*";
       
       cout<<endl;
    }
    
      for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i+1;j++){
            cout<<" ";
        }
       for(int k=n;k>=i+1;k--)
       cout<<"*";
       
       cout<<endl;
    }

    return 0;
}