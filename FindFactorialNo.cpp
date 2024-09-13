#include<iostream>
using namespace::std;
int main(){
	
	//find the factorial of n number ;
	
	int n;
	int fact=1;
	
	
	cout<<"Enter the value of n:=";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		fact = fact * i;
	}
	
	cout<<"\n Factorial of n:="<<fact;
	return 0;
}