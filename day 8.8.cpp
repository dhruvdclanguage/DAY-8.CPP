#include<iostream>

using namespace std;

class student {
	
	private:
		int stu_Rollno;
		char stu_name[70];
		char stu_schoolname[70];
		
	public:
		
		void setter (){
			
			cout<<"Enter Roll Number : ";
			cin>>stu_Rollno ;
			
			cout<<"Enter name : ";
			cin>>stu_name ;
			
			cout<<"Enter School Name : ";
			cin>>stu_schoolname ;
			
		}
		
		void getter (){
			
			cout<<stu_Rollno<<endl;
			cout<<stu_name<<endl;
			cout<<stu_schoolname<<endl;
		
		}
		
};

int main (){
	
	int i , n ;
	
	cout<<"Enter number of studentds data : ";
	cin>>n ;
	cout<<endl;
	
	student obj[n] ;
	
	for(i=0;i<n;i++){
		
		obj[i].setter();
		
		cout<<endl;
				
	}
	
	cout<<endl<<endl;
		
	for(i=0;i<n;i++){
		
		obj[i].getter();
		
		cout<<endl;
				
	}
	
	return 0 ;
}
