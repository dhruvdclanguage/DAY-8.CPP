#include<iostream>
#include<string.h>

using namespace std;

class HighSchool{
	
	private:
		int stu_id;
		char stu_name[60];
		int stu_roll_no;
		int stu_age;
		char stu_contact[18];
		char stu_address[100];
	
	public:
		
		static char stu_standard[70] ;
		static char stu_edu_institute_name[100] ;
		
		void setter (int stu_id,char stu_name[],int stu_roll_no,int stu_age,char stu_contact[],char stu_address[]){
			
			this->stu_id=stu_id;
			strcpy(this->stu_name,stu_name);
			this->stu_roll_no=stu_roll_no;
			this->stu_age=stu_age;
			strcpy(this->stu_contact,stu_contact);
			strcpy(this->stu_address,stu_address);
			
		}
		
		void getter (){
			
			cout<<stu_id<<endl;
			cout<<stu_name<<endl;
			cout<<stu_roll_no<<endl;
			cout<<stu_standard<<endl;
			cout<<stu_age<<endl;
			cout<<stu_contact<<endl;
			cout<<stu_edu_institute_name<<endl;
			cout<<stu_address<<endl;
			
		}
		
};

char HighSchool :: stu_standard[] = "11st" ;
char HighSchool :: stu_edu_institute_name[] = "ASHADEEP VIDHYALAYA ";

class College {
	
	private:
		
		HighSchool obj ;
	
	public:
		
		void print (){
			
			obj.setter(2,"PRAJAY",79,22,"8888877777","vadodara");
			obj.getter();
		}
};

int main (){
	
	
	
	HighSchool obj ;
	
	obj.setter(1,"DHRUV",80,21,"9999955555","bhavnagar");
	obj.getter();
	
	cout<<endl;
	
	College o ;
	o.print();
	
	return 0 ;
}
