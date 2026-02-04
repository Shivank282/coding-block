#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three digits ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"Greater value is "<<a;

    else if( b>a && b>c)
    cout<<"Greater value is "<<b;

    else 
    cout<<"Greater value is "<<c;

    return 0;
}