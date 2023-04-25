#include<iostream>

using namespace std;

class RailwayRSystem{
	
	private:
		int  Train_number;
		char Train_name[20];
		char Train_Source[20];
		char Train_Destination[20];
		int  Train_Time;
		
	public:
	
	   void set(){
	   	
	   	cout<<"Enter Train Number :";
	   	cin>>Train_number;
	   	
	   	cout<<"Enter Train Name :";
	   	cin>>Train_name;
	   	
	   	cout<<"Enter Train Source :";
	   	cin>>Train_Source;
	   	
	   	cout<<"Enter Train Destination :";
	   	cin>>Train_Destination;
	   	
	   	cout<<"Enter Train Time :";
	   	cin>>Train_Time;
	   	
	   }
	   void get(){
	   	
	   	cout<<"Train Number :"<<Train_number<<endl;
	   	cout<<"Train Name :"<<Train_name<<endl;
	   	cout<<"Train Source :"<<Train_Source<<endl;
	   	cout<<"Train Destination :"<<Train_Destination<<endl;
	   	cout<<"Train Time :"<<Train_Time<<endl;
	   }	
	   
	   int check_TrainNumber(){
	   	
	   	    return Train_number;
	   }
};
int main(){
	 RailwayRSystem obj[3];
	 int i;
	 
	 for(i=0;i<=2;i++){
	 	
	 	obj[i].set();
	 }
	
	int train_number;
	
	cout<<"Enter YOur Train Number:";
	cin>>train_number;
	
	for(i=0;i<=2;i++){
		
		if(train_number==obj[i].check_TrainNumber()){
			
			obj[i].get();
		}
	}

   return 0;
}
	
	
