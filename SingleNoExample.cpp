#include<iostream>
#include<vector>
using namespace::std;
void singleNumber();

class SingleNo{
	
	public:
		
		void singleNumber(vector<int> vec){
			
			int ans=0;
			
			for(int val : vec){
				
				ans ^= val;
			}
			
			cout<<ans<<endl;
			
		}
		
		
};

int main(){
	
	vector<int> vec={4,1,2,1,2};
	
	SingleNo obj;	
	obj.singleNumber(vec);
	return 0;
}