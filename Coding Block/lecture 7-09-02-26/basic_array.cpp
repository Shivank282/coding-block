#include<iostream>

int main(){
    int arr[5];
    std::cout<<"enter the value"<<std::endl;
    for(int i=0;i<5;i++){
       std:: cin>>arr[i];
    }
    arr[2]=NULL;
     for(int i=0;i<5;i++){
       std:: cout<<arr[i]<<" ";
    }
    return 0;
}