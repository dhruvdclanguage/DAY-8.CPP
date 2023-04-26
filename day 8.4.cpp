#include<iostream>
#include<string>

using namespace std ;

class states {
	
	private:
		
		static char x[600] ;
	
	public:
		
		static void print(){
			
			cout<<"state names : "<<endl<<x<<endl ;
			
		}
	
};

char states :: x[] = "Uttar Pradesh,Maharashtra,Rajasthan,Assam,Goa,Sikkim,Odisha,West Bengal,Andhra Pradesh,Haryana,Madhya Pradesh,Gujarat,Himachal Pradesh,Mizoram,Tripura,Chhattisgarh,Meghalaya,Telangana,Punjab,Tamil Nadu,Bihar,Kerala,Manipur,Arunachal Pradesh,Nagaland,Uttarakhand,Jharkhand,
Jammu & Kashmir ;

int main (){	
	states obj ;	
	obj.print();
	
	return 0 ;
}
