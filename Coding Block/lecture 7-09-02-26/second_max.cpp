#include<iostream>
using namespace std;
void second_max(int arr[],int n){
     int max=0;
   int s_max=0;
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
       if(arr[i]>max){
        max=arr[i];
       
       }
    }
       for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
       if(arr[i]<max&&arr[i]>s_max){
        s_max=arr[i];
       
       }

       
    }
    cout<<endl;
    cout<<"maximum element in array: "<<max<<endl;
    cout<<"minimun vaule of array is: "<<s_max<<endl;

}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    
    cout<<"enter the value"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
   second_max(arr,n);
    return 0;
}