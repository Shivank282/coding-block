#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int even = 0,odd=0,pos=1;
	while (n>0){
		int temp =n%10;
		if(pos%2!=0){
odd+=temp;
		}
		else{
			even+=temp;
		}
		n/=10;
		pos++;
	}
		cout<<odd << endl;
		cout << even << endl;
	
	
}