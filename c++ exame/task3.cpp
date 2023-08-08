#include<iostream>
#include<stdio.h>
using namespace std;

class hotel{
	public :	
	int id;
	char name[100];
	char type[100];
	int staff_size;
	int room_size;
	int establish_year;
	char address[100];
	int rating_type;
	char website[100];
	
	  void setdata(int id,char name[100],char type[100],
	  int staff_size,int room_size,int establish_year,
	  char address[100],int rating_type,char website[100]){
	    		    		    
	    	this->id;
	    	strcpy(this->name,name);
	    	strcpy(this->type,type);
	    	this->staff_size;
	    	this->room_size;
	    	this->establish_year;
	    	strcpy(this->address,address);
	    	this->rating_type;
	    	strcpy(this->website,website);	    	
	    	
		}	
	
		void getdata(){
			cout<<"staff_id = "<<staff_id<endl;
			cout<<"staff_name = "<<staff_name<<endl;
			cout<<"rating_type = "<<rating_type<<endl;
			cout<<"staff_size = "<<staff_size<<endl;
			cout<<"room_size = "<<room_size<<endl;
			cout<<"established_year = "<<establish_year<<endl;
			cout<<"address = "<<address<<endl;
			cout<<"rating_type = "<<rating_type<<endl;
			cout<<"webside = "<<website<<endl;			
		}	
};
int main(){	
	hotel hl;
	hl.setdata(1724,"sai","",300,102,1991,"goa",4,"sai.com");
	hl.getdata();
		
	return 0;
	
}
