#include<iostream>
#include<string.h>
using namespace std;

class a{
  public :		
	int id;
	char name[100];
	char role[100];
	int salary[100];
	int experience[100];
	char comp_name[100];
	char address[100];
	char email[100];
	char contact[10];
	
	void setdata(){
		cout<<"Enter id =";
		cin>>id;
		cout<<"Enter name =";
		cin>>name;
		cout<<"Enter role =";
		cin>>role;		
	}		
};
class b: public a{
	public :		
		void setdata(){
			cout<<"Enter salary =";
			cin>>salary;
			cout<<"Enter experience =";
			cin>>experience;
		}		
};
class c:public b{
	public :		
		void setdata(){
			cout<<"Enter company name =";
			cin>>comp_name;
			cout<<"Enter address =";
			cin>>address;
		}
		void getdata(){
			cout<<"Enter name ="<<name<<endl;
			cout<<"Enter role ="<<role<<endl;
			cout<<"Enter salary ="<<salary<<endl;
		}
};
class d : public c{
		public:	
     	void setdata(){
		cout<<"Enter email =";
		cin>>email;
		cout<<"Enter contact =";
		cin>>contact;		
	}
	void getdata(){		
		cout<<"Enter id ="<<id<<endl;
		cout<<"Enter name ="<<name<<endl;
		cout<<"Enter role ="<<role<<endl;
		cout<<"Enter salary ="<<salary<<endl;
		cout<<"Enter experience ="<<experience<<endl;
		cout<<"Enter company name ="<<comp_name<<endl;
		cout<<"Enter address ="<<address<<endl;
		cout<<"Enter email ="<<email<<endl;
		cout<<"Enter contact ="<<contact<<endl;
	}	
};

int main(){
	class d D;
	D.getdata();
	D.setdata();
		
	return 0;
	
}
