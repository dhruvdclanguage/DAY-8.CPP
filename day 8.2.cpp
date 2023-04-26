#include<iostream>
#include<string.h>

using namespace std;

class Students{
	
	private :
		
		int stu_id;
		char stu_name[60];
		int stu_age;
			
	public :
		
		void Read (int stu_id,char stu_name[],int stu_age){
			
			this->stu_id = stu_id;
			strcpy( this->stu_name,stu_name);
			this->stu_age=stu_age;
						
		}
		
		void Print (){
			
			cout<<stu_id<<endl ;
			cout<<stu_name<<endl ;
			cout<<stu_age<<endl ;
						
		}
	
};

class create {
	private:
		
		Students obj;
		
	public:
		
		void print (){
			
			obj.Read(01,"Prajay",21);
			obj.Print();
			
		}
			
		
};

int main (){
	
	create o ;
	o.print();
	
	return 0 ;
}
