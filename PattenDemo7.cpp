#include<iostream>
using namespace::std;
int main(){
	
	// Inverted Triangle Patten Demo1
	
	int n=4;
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			
			if(i>j){	
				cout<<"  ";		
			}else{
				cout<<i<<" ";	
			}	
		}
		cout<<endl;
	}
	return 0;
}