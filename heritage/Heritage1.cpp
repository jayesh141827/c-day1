#include<iostream>
#include<string.h>
using namespace std;

class Mother {
public:
    void display() {
        cout << "I am the Mother." << endl;
    }
};

class Daughter : public Mother {
public:
    void display() {
        cout << "I am the Daughter." << endl;
    }
};

int main() {
    Daughter d;
    d.display();
    
    
    return 0;
}
