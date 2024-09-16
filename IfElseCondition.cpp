#include<iostream>
using namespace::std;
int main(){
	
	// Given the person age find  person is eligible for voting or not ;
	
	int age ;
	cout<<"Enter the person age:=";
	cin>>age;
	
	if(age >= 18){
		
		cout<<"\nPerson is eligible for voting";
	}else{
		
		cout<<"\nPerson is not eligible for voting";
	}
	
	return 0;
}