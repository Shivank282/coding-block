#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter the marks os a student ";
    cin>>marks;
    switch(marks/10){
        case 10:
        case 9:
        cout<<"Grade A";
        break;
          case 8:
        cout<<"Grade B";
        break;
          case 7:
        cout<<"Grade C";
        break;
          case 6:
        cout<<"Grade D";
        break;
          case 5:
           case 4:
            case 3:
             case 2:
              case 1:
        cout<<"Grade F";
        break;
        default:
        cout<<"Enter a valid input";
        break;

    }

    return 0;
}