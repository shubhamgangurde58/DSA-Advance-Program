#include<iostream>
using namespace::std;
int findDemo(int arr[],int target,int size){
	
		for(int i=0;i<size;i++)
		{
			for(int j=size-1;j<size;j++)
			{
				while(i < j){
					
					if(arr[i]+arr[j] > target){
						j--;
					}else if(arr[i]+arr[j] < target){
						i++;
					}else{
						return i;
						return j;
						cout<<i<<" "<<j<<" ";
					}
				}
			}
		}
		
			
}
int main(){
	
	int target=9;
	
	int arr[]={2,7,11,15};
	
	int size= sizeof(arr)/sizeof(0);
	
 	findDemo(arr,target,size);
	
	return 0;
}