#include<iostream>
using namespace::std;

class EncapDemo1{
	
	private :
		int a;
		int b;
	public:
		
		void setValue(int x,int y){
			
			a=x;
			b=y;
		}
		int getValue(){
			
			return a+b;
			
		}
		
		
};

int main(){
	
	EncapDemo1 obj;
	obj.setValue(10,20);

	cout<<"Addition:="<<obj.getValue();
	
	return 0;
}