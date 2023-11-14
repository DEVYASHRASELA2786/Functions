#include<iostream>

using namespace std;

string num;


// int sum_digit(int n){
// 	if(n>=2){
// 		return 0;
// 	}
// 	else{
// 		return num[n]+sum_digit(n+1);	
// 	}	
// }


int main(){
	cout<<"Input number: ";
	cin>>num;
	// int sum=sum_digit(0);
	// cout<<"Sum of Digits of a number "<<num<<" is: "<<sum;
	cout<<num[0]+2;
	return 0;
}
