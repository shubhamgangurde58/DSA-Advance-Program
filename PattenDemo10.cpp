#include<iostream>
using namespace::std;
int main(){
	
	int n=4;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n-i;j++){
			
			cout<<"  ";
		}
			
			cout<<"* ";	
		
		for(int j=0;j<i*2-1;j++){
			
			cout<<"  ";
		}
			if(i!=0){
				cout<<"* ";
			}	
			
		cout<<"\n";
	}
	
		for(int i=n;i>=0;i--){
		
			for(int j=0;j<n-i;j++){
				
				cout<<"  ";
			}	
				cout<<"* ";	
			
			for(int j=0;j<i*2-1;j++){
				
				cout<<"  ";
			}
				if(i!=0){
					cout<<"* ";
				}	
		
			cout<<"\n";
		}
	return 0;
}