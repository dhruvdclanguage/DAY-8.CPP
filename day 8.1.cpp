#include<iostream>
#include<string.h>

using namespace std ;

class Employee  {
	
	private :
		int id ;
		char name[50] ;
		int role ;
		int salary ;
		int experience ;
		char address[50] ;
		char email[50] ;
		int contact ;
			
	public :
		
		void setter (int id,char name[],int role,int salary,int experience,char address[],char email[],int contact){
			
			this->id  = id ;
			strcpy( this->name,name ) ;
			this->role=role ;
			this->salary=salary ;
			this->experience=experience ;
			strcpy( this->address,address ) ;
			strcpy( this->email,email ) ;
			this->contact=contact  ;
				
		}
		
		void getter (){
			
			cout<<id<<endl ;
			cout<<name<<endl ;
			cout<<role<<endl ;
			cout<<salary<<endl ;
			cout<<experience<<endl ;
			cout<<address<<endl ;
			cout<<email<<endl ;
			cout<<contact<<endl ;
			
		}
	
};

int main (){
	
	Employee  o1,o2,o3,o4,o5;
	
		
	o1.setter(1,"Prajay",10,15000,1,"Godhra","prajaysupro@gmail.com",9999955555);
	o1.getter();
	
	cout<<endl;	
	
	o2.setter(2,"Dhairya",20,20000,3,"surat","xyz@gmail.com",8888877777);
	o2.getter();
	
	cout<<endl;	
	
	o3.setter(3,"Harekrushan",30,25000,2,"surat","hare123@gmail.com",9925022443);
	o3.getter();
	
	cout<<endl;	
	
	o4.setter(4,"Ravi",26,45000,4,"mumbai","Ravidonga@gmail.com",7777788888);
	o4.getter();
	
	cout<<endl;	
	
	o5.setter(5,"shyam",23,50000,6,"Rajkot","shyampatel@gmail.com",1977699130);
	o5.getter();
	
	
	return 0 ;
}
