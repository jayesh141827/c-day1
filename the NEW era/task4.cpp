#include<iostream>
#include<string.h>
using namespace std;

class room {
	int l,b,h;
	char addres ;
	char city ;
	char area ;
	public : 
		void getroom()
		{
			cout<<"Enter length, breath, height, addresh,city,area : ";
			cin>>l>>b>>h>>addres>>city>>area;
		}
		void putroom()
		{
			cout<<"Length: "<<l<<",Breath: "<<b<<", Height: "<<h<<""<<endl;
		}
};
class address {
	int hno;
	char addresh[20];
	char cty[30];
	char state[30];
	public : 
		void getad()
		{
			cout<<"house number : ";
			cin>>hno;
			cout<<"city :";
			cin>>cty;
			cout<<"state : ";
			cin>>state;
		}
		void putad()
		{
			cout<<"House No.: "<<hno<<","<<addresh<<"city: "<<cty<<",state: "<<state<<endl;
		}
};

class house{
	char housename[30];
	address a;
	room r[10];

	public : 
			void input();
			void display();
};

void house :: input()
{	
	cout<<"Enter house name: ";
	cin>>housename;
	cout<<"Enter Address : \n";
	a.getad();
	
	for(int i=0;i<3;i++){
		cout<<"House Details : "<<i+1<<"\n";
		r[i].getroom();
	}
}


void house :: display()
{	
	cout<<"House name: "<<housename<<endl;
	cout<<"Address is: ";
	
	for(int i=0;i<3;i++){
		cout<<"House Details : "<<i+1<<"\n";
		r[i].putroom();
	}
}

int main()
{
	house x;
	x.input();
	x.display();
	return 0;
}
