#include<iostream>
#include<string.h>
using namespace std;

int main (){
	  int a,b,c;
	  cout<<"Enter value A =";
	  cin>>a;
	  cout<<"Enter value B =";
	  cin>>b;
    char solution [100]="can not bivide by zero";
    
     try{
     	
     	if(b==0)
     {
     	throw 10.23;
	 }
	  else{
	     c=a/b;
	    cout<<"c="<<c<<endl;
	 }
	
}
     catch(...)
     {
	   cout<<solution<<endl;
}
	
	return 0;
}


