#include<iostream>
using namespace::std;
int main(){
	
	// Floyd's Triangle Patten Demo1
	
	int n=4;
	int a=1;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			
			if(j<=i){
				
				cout<<a<<" ";
				a++;
			}
			
		}
		cout<<endl;
	}
	return 0;
}