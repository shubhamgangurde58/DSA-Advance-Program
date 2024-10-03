#include<iostream>
using namespace::std;
int main(){
	
	int a=4;
	int b=8;
	
	int x=6;
	int y=1;
	
	
	//bitwise AND operater
	cout<<"AND:="<<(a&b)<<endl;
	cout<<"&:="<<(6&10)<<endl;
	
	//bitwise OR operater
	cout<<"OR:="<<(a|b)<<endl;
	cout<<"|:="<<(6|10)<<endl;
	
	//bitwise XOR operater
	cout<<"XOR:="<<(a^b)<<endl;
	cout<<"^:="<<(6^10)<<endl;
	
	//bitwise left shift operater
	cout<<"LeftShift:="<<(x<<y)<<endl;
	cout<<"<<:="<<(10<<2)<<endl;
	
	//bitwise right shift operater
	cout<<"RightShift:="<<(x>>y)<<endl;
	cout<<"<<:="<<(10>>1)<<endl;
	return 0;
}