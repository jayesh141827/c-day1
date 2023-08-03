#include<iostream>
#include<string.h>
using namespace std;

class shcool{
	public:
		void arjun(){
			cout<<"arjun goto shcool dresh&bishical"<<endl;
		}
};
class colleg : public shcool{
	 public:
	 	void arjun(){
	 		cout<<"arjun goto colleg formal dresh & baike"<<endl;
		 }
};
int main (){
	colleg c;
	c.arjun();
	c.shcool::arjun();
	
	 return 0;
}
