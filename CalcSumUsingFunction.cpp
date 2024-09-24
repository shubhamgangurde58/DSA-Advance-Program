#include<iostream>
using namespace::std;
int calcSum(int ,int );
int main(){
	
	int n;
	int sum;
	
	cout<<"Enter the value of n:=";
	cin>>n;
	
	cout<<"Sum:="<<calcSum(n,sum);
	
	return 0;
}

int calcSum(int n,int sum){
	
	for(int i=1;i<=n;i++){
		sum += i;
		cout<<i<<endl;
	}
	return sum;
}