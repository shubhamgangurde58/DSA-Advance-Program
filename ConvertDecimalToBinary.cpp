#include<iostream>
using namespace::std;

int decToBinary(int dec){
	
	int ans=0;
	int power=1;
	
	while(dec > 0){
		
		int red = dec % 2;
		dec /= 2;
		
		ans += (red * power);
		
		power *= 10;
	}
	return ans;
}
int main(){
	
	int n;
	cout<<"Enter any decimal number :";
	cin>>n;

	for(int i=2;i<n;i++){
		cout<<decToBinary(i)<<endl;;
	}	
	
	return 0;
}