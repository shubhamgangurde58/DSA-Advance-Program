#include<iostream>
using namespace::std;
int main(){
	
	// Reverse Triangle Patten Demo1
	
	int n=4;
	
	for(int i=1;i<=n;i++){
		
		for(int j=n;j>=1;j--){
			
			if(j<=i){
				
				cout<<j<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}