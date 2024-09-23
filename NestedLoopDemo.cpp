#include<iostream>
using namespace::std;
int main(){
	
	// nested loop example
	
	int n=10;
	int m=5;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}