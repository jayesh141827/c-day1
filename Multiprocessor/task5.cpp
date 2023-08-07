#include<iostream>
#include<string.h>

using namespace std;

class Distance{

	public:
		
		int month;
		int years;
		
		void set_distance(){
			
			cout<<"Enter month: ";
			cin>>month;
			cout<<"Enter years: ";
			cin>>years;
		}
		
    void get_distance(){
    	
	cout<<"Distance is --> "<<month;
	cout<<" month ";
	cout<<""<<years;
	cout<<"years "<<endl;
	
	}

	void add(Distance d1, Distance d2){
	
    month= d1.month + d2.month;
	years = d1.years + d2.years;
	month = month + (years / 12);
	years = years % 12;
	cout<<endl;
	
	}

};


int main()
{
	Distance d1, d2, d3;

	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d3.get_distance();
	return 0;
}
