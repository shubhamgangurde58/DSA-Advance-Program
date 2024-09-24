#include<iostream>
using namespace::std;
int add(int ,int );
float sub(float ,int );
float multi(float,float);

int main(){
	
	int a=10;
	int b=20;
	float x=15.7;
	float y=8.5;
	
	cout<<"\nSum:="<<add(a,b);
	cout<<"\nSubtraction:="<<sub(x,b);
	cout<<"\nMultiplication:="<<multi(x,y);
	
	return 0;
}

int add(int a,int b){
	return a+b;
}

float sub(float x,int b){
	return x-b;
}

float multi(float x,float y){
	return x*y;
}


