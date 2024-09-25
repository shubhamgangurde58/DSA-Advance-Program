#include<iostream>
using namespace::std;
int findPrime(int);
int main(){
	
	//WAF to check is number is prime or not
	
	int flag=1;
	int n;
	cout<<"Enter the any number:=";
	cin>>n;
	
	if(n <= 1){
		
		flag=1;
		
	}else{
		
		for(int i=2;i<n;i++){
			
			if(n%i==0){
				flag=0;
				break;
			}
		}
	}
	
	if(flag == 1){
		cout<<n<<" is prime"<<endl;
	}else{
		cout<<n<<" is not prime "<<endl;
	}

}
