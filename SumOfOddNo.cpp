#include<iostream>
using namespace::std;
int main(){
	
	int n=20;
	int sum;
	
	for(int i=0;i<=n;i++){
		
		if(i%2 != 0){
			
			sum += i;
		}
	}
	
	cout<<"Sum of all odd number from 1 to n :="<<sum<<endl;
	
	return 0;
}