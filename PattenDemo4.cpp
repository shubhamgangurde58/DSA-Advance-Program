#include<iostream>
using namespace::std;
int main(){
	
	// Triangle Patten Demo2
	
	int n=4;
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			
			if(j<=i){
				
				cout<<j<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}