#include<iostream>
#include<string.h>
using namespace std;

class MyClass {
public:
    void memberFunc(int a = 0, int b = 0, int c = 0, int d = 0) {
        cout << "Member Function called with arguments: "
		     << a << " " << b << " " << c << " " << d << endl;
    }
};

int main() {
    MyClass obj;

    obj.memberFunc();
    obj.memberFunc(1);
    obj.memberFunc(1, 2);
    obj.memberFunc(1, 2, 3);
    obj.memberFunc(1, 2, 3, 4);

    return 0;
}
