#include<iostream>
using namespace::std;
int main(){
	
	// sum of all number from 1 to n which are divisible by 3;
	int n;
	int sum;
	
	cout<<"Enter the value of n:=";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		if(i%3==0){
			
			sum += i;
			
			cout<<i<<endl;
		}
		
	}
	
	cout<<"Sum :="<<sum;
	return 0;
}