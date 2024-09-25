#include<iostream>
using namespace::std;
int findNCR(int,int);
int findFact(int);
int main(){
	
	int n=6;
	int r=3;
	
	cout<<"nCr:="<<findNCR(n,r);
	return 0;
}
int findNCR(int n,int r){
	
	int n_Fact = findFact(n);
	int r_Fact = findFact(r);	
	int nmr_Fact = findFact(n-r);
	
	return n_Fact / (r_Fact * nmr_Fact);	
}
int findFact(int x){
	
	int fact=1;
	
	for(int i=1;i<=x;i++){
		
		fact = fact * i;	
	}
	return fact;
}
