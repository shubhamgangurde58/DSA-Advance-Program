#include<iostream>
using namespace::std;

class ObjectDemo1{
	
	private:
		
		int a=10;
		int b=20;
	
	public:
		
		void showDemo(){
			
			cout<<"Addition="<<a+b;
			
		}
	
};

int main(){
	
	ObjectDemo1 obj;
	obj.showDemo();
	
	return 0;
}