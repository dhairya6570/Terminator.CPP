#include<iostream>

using namespace std;

int main (){
	
	int age ;
	int b = 17 ;
	
	char error[50] = "Cannot vote due to age restrition";
	
	try{
		
		if(b << 18){
			
			throw error;
		}
		else{
			
			age = b ;
			cout<<age;
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
