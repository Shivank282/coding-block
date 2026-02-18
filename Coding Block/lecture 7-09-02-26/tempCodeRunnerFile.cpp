#include<iostream>
using namespace std;

void reverse(int n,int &arr[n]){
    for(int i=1;i<=n;i++){
        arr[i]=arr[n-i];
    }
}
int main(){
    int n;
    cout<<"Enter th size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr[n],n);
    
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}