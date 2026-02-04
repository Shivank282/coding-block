#include <iostream>
using namespace std;

int main() {
    int n=5;

   for(int i=1;i<=n;i++){
      for(int s=n;s>=i;s--){
            cout<<"* ";
        }
        
          for(int j=2;j<=i;j++){
            if(j==2)
            cout<<"  ";

            else{
                cout<<"    ";
            }
        }
       
       for(int k=n;k>=i;k--)
       if(k!=1)
       cout<<"* ";


    cout<<endl;
   }
    return 0;
}