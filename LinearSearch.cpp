#include<iostream>
using namespace::std;

int findItem(int ls , int arr[],int size){
	
	for(int i=0;i<size;i++){
		if(arr[i-1] == ls){
			return i;
		}
	}
	return 0;
	
}
int main(){
	
	int ls;
	cout<<"Enter the value searching item :=";
	cin>>ls;
	
	int arr[]={50,60,20,30,5,50,70};
	
	int size = (sizeof(arr)/sizeof(0));
	
	int ans = findItem(ls,arr,size);
	
	if(ans == 0){
		cout<<"Item not found "<<endl;
	}else{
		cout<<"Item found on index no:="<<ans<<endl;
	}
	
}