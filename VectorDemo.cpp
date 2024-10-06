#include<iostream>
#include<vector>
using namespace::std;

int main(){
	
	//vector Demo
	
	vector<int> vec={10,20,30,40};
	vector<char> vecc(5,'a');

	
	vec.push_back(50);
	vec.push_back(60);
	vec.push_back(70);
	cout<<"size of="<<vec.size()<<endl;
	vec.pop_back();
	vec.pop_back();
	
	for(int val : vec){
		
		cout<<val<<endl;
	}
		cout<<"size of="<<vec.size()<<endl;
		
	for(char val : vecc){
		
		cout<<val<<endl;
	}
	
	cout<<vec.front();
	
	return 0;
}