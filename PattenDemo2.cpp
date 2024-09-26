#include<iostream>
using namespace::std;
int main(){
	
	//Square Patten Demo 2
	
	int n=3;
	int a=1;
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			
			cout<<a<<" ";
			a++;
		}
		cout<<"\n";
	}
	return 0;
}