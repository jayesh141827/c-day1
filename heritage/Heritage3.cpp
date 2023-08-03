#include<iostream>
#include<string.h>
using namespace std;

class Person{
        public:
        char name;
        int age;
   
    public:
        void readPerson(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
       
	    void printPerson(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

class Employee{
    public:
        char designation;
        int salary;
   
    public:
        void readEmployee(){
            cout<<"Enter designation: ";
            cin>>designation;
            cout<<"Enter salary: ";
            cin>>salary;
        }
        
		void printEmployee(){
            cout<<"Designation: "<<designation<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

class EmpInfo: public Person, public Employee{
    public:
        void readEmpInfo(){
            readPerson();
            readEmployee();
        }
       
	   void printEmpInfo(){
            printPerson();
            printEmployee();
        }
};

int main(){
    EmpInfo e;
    e.readEmpInfo();
    cout<<endl;
    e.printEmpInfo();
    
    return 0;
}
