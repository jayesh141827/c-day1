#include<iostream>
#include<string.h>
using namespace std;

class Person{
	public:
    string name;
    int age;
    public:
  
    void getPerson(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
  
    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Employee: public Person{
    protected:
    int empId;
    string dept;
    public:
    void getEmployee(){
        cout<<"Enter Employee ID: ";
        cin>>empId;
        cout<<"Enter Department: ";
        cin>>dept;
    }
    
	void displayEmployee(){
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Department: "<<dept<<endl;
    }
};

class Salary: public Employee{
    protected:
    int sala;
    public:
    void getSalary(){
        cout<<"Enter Salary: ";
        cin>>sala;
    }
  
    void displaySalary(){
        cout<<"Salary: "<<sala<<endl;
    }
};

int main(){
    Salary s;
    s.getPerson();
    s.getEmployee();
    s.getSalary();
    cout<<"\n--------------------------------"<<endl;
    s.displayPerson();
 
  return 0;   
}
