#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    while(b!=0){
        a=a%b;
        a=a+b;
        b=a-b;
        a=a-b;
      
    }
    cout<<"GCD is: "<<a;
    return 0;
}