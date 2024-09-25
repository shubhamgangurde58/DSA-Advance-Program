#include<iostream>
using namespace::std;
int main(){
	
	// find fibonacci series
	
	int n;
	int a=0;
	int b=1;
	int fibo;
	

	
	cout<<"Enter the No:=";
	cin>>n;
	
	cout<<a<<"\n"<<b<<endl;

	for(int i=0;i<n;i++){
		
		fibo = a+b;
		cout<<fibo<<endl;
		a = b;
		b=fibo;
	}	
	
		
	return 0;
}