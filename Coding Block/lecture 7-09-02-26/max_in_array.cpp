#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    
    cout<<"enter the value"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int max=arr[0];
   int min=arr[0];
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
       if(arr[i]>max){
        max=arr[i];
       }
       if(arr[i]<min){
        min=arr[i];
       }
    }
    cout<<endl;
    cout<<"maximum element in array: "<<max<<endl;
    cout<<"minimun vaule of array is: "<<min<<endl;
    return 0;
}