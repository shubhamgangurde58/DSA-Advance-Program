#include<iostream>
using namespace  std;

void functionDemo(int x){
	x=50;
	cout<<"x in function :="<<x<<endl;
	
}
int main(){
	
	int x =10;
	
	cout<<"orignal value of X="<<x<<endl;
	
	functionDemo(x);
	
	cout<<"X in main="<<x<<endl;
	return 0;
}
