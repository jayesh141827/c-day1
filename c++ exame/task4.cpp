#include<iostream>
#include<string.h>
using namespace std;

class methods{
	public :
	int K;
		float O;
		char z[100];

		void set(){
			cout<<"hi"<<endl;

		}
		void set(int K){
			this->K=K;
			cout<<"value of K ="<<x<<endl;

		}
		void set(int K,float O){
			this->K=K;
			this->O=O;
			cout<<"value of K ="<<K<<endl;
			cout<<"value of O ="<y<<endl;

		}
			void set(int K,float O,char z[]){
			this->K=K;
			this->O=O;
			strcpy(this->z,z);
			cout<<"value of x ="<<K<<endl;
			cout<<"value of O ="<<O<<endl;
			cout<<"value of z ="<<z<<endl;

		}
};

int main(){
	methods ms;
	ms.set();
	ms.set(10);
	ms.set(30,12.10);
	ms.set(10,23.20,"kjp");

	return 0;
}
