#include<iostream>
#include<string.h>

using namespace std;

class Data{	
	private:
	 
	    char s_name[60];
	    char s_acc_no[25];
	    char s_phone[15];
	    char s_mail[45];
	
	public:
		
	void set(){	
				cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -"<<endl;
			cout<<"\t-:Welcome as STAFF:-"<<endl;
			cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -"<<endl<<endl<<endl;
			cout<<"Enter the Name of staff		  : ";
			cin>>s_name;
			cout<<"Enter the Account Number of staff : ";
			cin>>s_acc_no;
			cout<<"Enter the Phone Number of staff   : ";
			cin>>s_phone;
			cout<<"Enter the E-mail of staff    	  : ";
			cin>>s_mail;
		}		
		void get(){
			
				
			cout<<"Name		:"<<s_name<<endl;
			
			cout<<"Account Number  :"<<s_acc_no<<endl;
			
			cout<<"Phone Number    :"<<s_phone<<endl;
			
			cout<<"E-mail    	:"<<s_mail<<endl;
						
		}
};

int main (){
	
	char login;
	
	Data obj;
	
	//1
	cout<<"\t-> BANK MANAGMENT SYSTEM <-		"<<endl;
	cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -"<<endl<<endl;
	cout<<"\t-> Designed N Programed by <-	 "<<endl;
	cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -"<<endl;
	cout<<"\t   SONANI DHRUV NITINBHAI		"<<endl<<endl<<endl;
	cout<<"\t\t-> Trainer <-	"<<endl;
	cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -"<<endl;
	cout<<"		 SHIVAM SIR JADAV		"<<endl<<endl;
	cout<<"	PRESS ANY KEY N ENTER TO CONTINUE.."<<endl<<endl<<endl;
	
	
	//2
	cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- "<<endl;
	cout<<"-> Press 'A' to login as Administrator OR 'S' to login as Staff<-"<<endl;
	cout<<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- "<<endl;
	cout<<"Press 'A' or 'S' : ";
	cin>>login;
	
	
	//3
	switch(login){
		
		case 'S':
		case 's':	
			
			obj.set();			
			break;	
	      default:
			
			cout<<"Please Try Again ";	
	}
	
	//4
	cout<<endl<<endl;
	cout<<"--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- -"<<endl;
	obj.get();
	cout<<"--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- -"<<endl;
	
	
	
	
	
	
	
	
	return 0 ;
}
