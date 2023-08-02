#include<iostream>
#include<string.h>
using namespace std;

class Animal {
	public:
    string name;
    int age;

public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
};

class Zebra : public Animal {
public:
    void display() {
        cout << "Zebra Name: " << name << endl;
        cout << "Zebra Age: " << age << endl;
        cout << "Place of Origin: Africa" << endl;
    }
};

class Dolphin : public Animal {
public:
    void display() {
        cout << "Dolphin Name: " << name << endl;
        cout << "Dolphin Age: " << age << endl;
        cout << "Place of Origin: Oceans" << endl;
    }
};

int main() {
    Zebra z;
    z.set_value("Marty", 5);
    z.display();

    cout << endl;

    Dolphin d;
    d.set_value("Flipper", 10);
    d.display();

    return 0;
}
