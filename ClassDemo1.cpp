#include<iostream>
using namespace::std;
class ClassDemo1{
	
	private:
		int a=10;	
		int b=20;

	public:	
		
	int x=20;
	
		void sumDemo(){
			cout<<"sum Of Two number :="<<a+b;
		}	
		
	
};
int main(){
	
	ClassDemo1 obj;
	
	obj.sumDemo();
	cout<<"\nX="<<obj.x;
	
	
	return 0;
}