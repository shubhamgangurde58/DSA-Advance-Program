#include<iostream>
using namespace::std;
int main(){
	
	int n=4;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		for(int j=0;j<n-i-1;j++){
			cout<<"  ";
		}
		for(int j=n-1;j>=0;j--){
		
			if(i < j){
				cout<<"  ";
			}else{
				cout<<"* ";
			}
		
		}
		cout<<endl;
	}
	
	for(int i=n-1;i>=0;i--){
		
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		for(int j=0;j<n-i-1;j++){
			cout<<"  ";
		}
		for(int j=n-1;j>=0;j--){
		
			if(i < j){
				cout<<"  ";
			}else{
				cout<<"* ";
			}
		
		}
		cout<<endl;
	}
	
	return 0;
}