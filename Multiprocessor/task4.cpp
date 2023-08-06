#include<iostream>
#include<string.h>
using namespace std;

class Counter{
    private:
        int count;
    public:
        Counter(int c=0): count(c){}
        
        
        Counter operator++(){
            return Counter(++count);
        }
        
       
        Counter operator++(int){
            return Counter(count++);
        }
        
        
        Counter operator--(){
            return Counter(--count);
        }
        
        
        Counter operator--(int){
            return Counter(count--);
        }
        
        
        void display(){
            cout << "Count: " << count << endl;
        }
};

int main(){
    Counter c1(5);
    
    cout << "Initial ";
    c1.display();
    
   
    cout << "prefix: ";
    (++c1).display();
    
   
    cout << "postfix: ";
    (c1++).display();
    c1.display();
    
    return 0;
}
