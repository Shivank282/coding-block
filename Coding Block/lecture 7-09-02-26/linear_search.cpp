#include<iostream>
using namespace std;
int main(){
    int n,key,count=0;
    bool found =false;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the value"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Enter key to search: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
   found =true;
   count++;
        }
    }
    if(found){
        cout<<"element found "<<count<<" times";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}