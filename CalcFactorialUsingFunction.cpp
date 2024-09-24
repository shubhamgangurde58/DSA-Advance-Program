#include<iostream>
using namespace::std;
int findFactorial(int,int);
int main(){
	int n;
	int fact=1;
	
	cout<<"Enter the value of N=";
	cin>>n;
	
	cout<<"Factorial is:="<<findFactorial(n,fact);
	
	return 0;
}

int findFactorial(int n,int fact){
	for(int i=1;i<=n;i++){
		
		fact=fact*i;
	}
	return fact;
}