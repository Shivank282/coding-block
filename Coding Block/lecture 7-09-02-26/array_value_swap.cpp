#include<iostream>

int main(){
    int arr[5];
    std::cout<<"enter the value"<<std::endl;
    for(int i=0;i<5;i++){
       std:: cin>>arr[i];
    }
    std::cout<<"Original array: "<<std::endl;
     for(int i=0;i<5;i++){
       std:: cout<<arr[i]<<" ";
    }
    arr[0]=arr[0]+arr[2];
    arr[2]=arr[0]-arr[2];
    arr[0]=arr[0]-arr[2];
      std::cout<<"after swapping array: "<<std::endl;
     for(int i=0;i<5;i++){
       std:: cout<<arr[i]<<" ";
    }
    return 0;
}