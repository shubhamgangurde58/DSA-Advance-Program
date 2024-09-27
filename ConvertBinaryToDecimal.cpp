#include<iostream>
using namespace::std;
int convertToDec(int binary){
	
	int ans=0;
	int power=1;
	
	while(binary > 0){
		
		int rmd = binary % 10;
		ans += rmd * power;
		binary /= 10;
		power *= 2;
		
	}
	
	return ans;
}
int main(){
	
	int binary;
	cout<<"Enter the binary no";
	cin>>binary;
	
	cout<<" "<<convertToDec(binary);
	return 0;
}