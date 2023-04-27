#include<iostream>

using namespace std;

class Dhruv;

class Hare {
	
	private:
		
		int HH;
		int MM;
		int SS;
		
	friend void Dhairya(Hare,Dhruv);	
		
};

class Dhruv {
	
	private:
		
		int HH;
		int MM;
		int SS;
	
	friend void Dhairya(Hare,Dhruv);
		
};

void Dhairya (Hare a , Dhruv b){
	
	a.HH = 2;
	a.MM = 60;
	a.SS = 30;
	
	b.HH = 4;
	b.MM = 40;
	b.SS = 60;
	
	cout<<"Hare: "<<a.HH<<endl;
	cout<<"Hare: "<<a.MM<<endl;
	cout<<"Hare: "<<a.SS<<endl;
	
	cout<<"Dhruv : "<<b.HH<<endl;
	cout<<"Dhruv : "<<b.MM<<endl;
	cout<<"Dhruv : "<<b.SS<<endl;
	
	cout<<endl<<endl;
	
	cout<<"Time : "<<a.HH+b.HH<<"/"<<a.MM+b.MM<<"/"<<a.SS+b.SS<<endl;
	
}

int main(){
	
	Hare obj1;
	Dhruv obj2;
	
	Dhairya(obj1,obj2);
	
			
	return 0 ;
}
