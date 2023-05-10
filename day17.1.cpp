#include<iostream>

using namespace std;

int main (){
	
	int a = 12 ;
	int b = 0 ;
	int c ;
	
	char error[50] = "Cannot divide by zero";
	
	try{
		
		if(b == 0){
			
			throw error;
		}
		else{
			
			c = a/b;
			cout<<c;
		}
		
	}
	
	catch(char n[]){
		
		cout<<n<<endl;
	}
	
	catch(...){
		
		cout<<"General Exception"<<endl;
	}
	
	return 0 ;
}
