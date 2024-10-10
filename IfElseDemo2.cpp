#include<iostream>
using namespace::std;
int main(){
	
	int age;
	cout<<"Enter the person Age :="<<endl;
	cin>>age;
	
	if(age >= 18){
		cout<<"Person is Eleigible for voting :"<<endl;
	}else{
		cout<<"Person is Not Eligible for voting "<<endl;
	}
}
