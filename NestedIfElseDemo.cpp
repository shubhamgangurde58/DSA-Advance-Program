#include<iostream>
using namespace::std;
int main(){
	
	int percentage;
	cout<<"Please enter your percentage:=";
	cin>>percentage;
	
	if(percentage >= 90 && percentage <=100){
		cout<<"Congratulation you are Pass with grade:=' A+ '"<<endl;
		
	}else if(percentage >= 80 && percentage <=90 ){
		cout<<"Congratulation you are Pass with grade:=' A '"<<endl;
		
	}else if(percentage >= 70 && percentage <=80){
		cout<<"Congratulation you are Pass with grade:=' B+ '"<<endl;
		
	}else if(percentage >= 60 && percentage <=70){
		cout<<"Congratulation you are Pass with grade:=' B '"<<endl;
		
	}else if(percentage >= 50 && percentage <=60){
		cout<<"Congratulation you are Pass with grade:=' c '"<<endl;
		
	}else if(percentage >= 40 && percentage <=50){
		cout<<"Congratulation you are Pass with grade:=' D '"<<endl;
		
	}else{
		cout<<"Sorry you are fail"<<endl;
	}
	return 0;
}