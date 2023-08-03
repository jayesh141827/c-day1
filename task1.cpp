#include<iostream>
using namespace std;

class MyClass {
public:
    void fun(int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0) {
        cout << "Argument 1: " << arg1 << endl;
        cout << "Argument 2: " << arg2 << endl;
        cout << "Argument 3: " << arg3 << endl;
        cout << "Argument 4: " << arg4 << endl;
        cout << endl;
    }
};

int main() {
    MyClass obj;

    obj.fun();
    obj.fun(1);
    obj.fun(2, 3);
    obj.fun(4, 5, 6);
    obj.fun(7, 8, 9, 10);

    return 0;
}
