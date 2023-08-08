#include<iostream>
#include<string.h>
using namespace std;

class time {
     private:
	  int hours;
      int minutes;
      int seconds;
     public:
      void gettime(void);
      void puttime(void);
      void addtime(time t1, time t2);
};
void time ::gettime(void){ 
       cout<< "enter time;"<<endl;
       cout<< "hours? ";
       cin>> hours;
       cout<< "minutes";
       cin>> minutes;
       cout<< "seconds?";
       cin>> seconds;       
}
 
    void time::putime(void){	
   	     cont<<endl;
	     cout<<"time after add:";
	     count<< hours <<":"
		      <<minutes << ":"
			  << seconds <<endl;
     }
};
 void time::addtime(time t1,time t2)      
   {     
       this->seconds = t1.seconds +t2.seconds;
	   this->minutes = t1.minutes + t2.minutes; 
       this->hours = t1.hours + t2.hours + this->seconds /60; 
       this->minutes %=60;
       this->seconds;
       
} 
       time t1 ,t2 , t3;
	   t1.gettime();      
       t2.gettime;
       t3.addtime;
       t3.putime()
       
    return0;
	   
}
       
