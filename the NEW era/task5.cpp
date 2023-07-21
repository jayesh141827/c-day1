#include<iostream>
#include<string.h>
using namespace std;

class employee{
     public :
     int id;
	 char name[100];
	 char work[100];
	 char comp[100];
     int number;     



};




int main(){

  employee j; 
 
   j.id =1;
   strcpy(j.name,"jayesh");
   strcpy(j.work,"j.work,");
   strcpy(j.comp,"ark private ltd ");
   j.number = 9998596394;

  cout<<"employee id = "<<j.id<<endl
      <<"employee name = "<<j.name<<endl
      <<"employee std ="<<j.work<<endl
      <<"employee comp ="<<j.comp<<endl
      <<"employee number ="<<j.number<<endl;


 return 0;
}


