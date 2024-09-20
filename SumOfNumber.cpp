#include<iostream>
using namespace::std;
int main(){
	
	//find sum of n number 
	
	int i=0;
	int n=0;
	int sum=0;
	
	cout<<"Enter the value of n:=";
	cin>>n;
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	
	cout<<"Sum of N number :="<<sum;
	return 0;
}