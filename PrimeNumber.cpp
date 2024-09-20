#include<iostream>
using namespace::std;
int main(){
	
	//check the given number is prime or not ;
	
	int n;
	int flag = 1;
	int i=2;
	cout<<"Enter the value of n:="<<endl;
	cin>>n;
	
	if(n==1){
	
		flag=1;	
		
	}else{
		
		for(i=2;i<n;i++){
			
			if(n % i==0){
				
				flag = 0;
				break;
			}	
		}
	}
	if(flag == 1){
		
		cout<<"Number is prime";
	}else{
		
		cout<<"Number is not prime";
	}
	
	return 0;
}