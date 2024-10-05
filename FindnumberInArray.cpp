#include<iostream>
using namespace std;
int main(){
	
	int size=0;
	int big=0;
	int smallest;
	
	cout<<"Enter the size of array:="<<endl;
	cin>>size;
	int arr[size];
		
	cout<<"enter the element:="<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<(sizeof(arr)/sizeof(0));i++){
		
		if(big < arr[i]){
			
			big = arr[i];
			
		}
		cout<<i<<"index ="<<arr[i]<<endl;
	}
	
	cout<<"big number in array="<<big<<endl;
	
	
	smallest = arr[0];
	for(int i=1;i<(sizeof(arr)/sizeof(0));i++){
		
		if(arr[i] < smallest){
			smallest = arr[i];
		}	
	}
		cout<<"smallest:="<<smallest<<endl;
	return 0;

}