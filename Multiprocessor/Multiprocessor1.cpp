#include <iostream>
#include <string.h>
using namespace std; 

class Message {
private:
    std::string internalMessage;

public:
    
    Message(const std::string& initialMessage = "") : internalMessage(initialMessage) {}

    
    void print() {
        std::cout << "Internal Message: " << internalMessage << std::endl;
    }

   
    void print(const std::string& additionalMessage) {
        std::cout << "Internal Message: " << internalMessage << std::endl;
        std::cout << "Additional Message: " << additionalMessage << std::endl;
    }
};

int main() {
    Message message1("Hello, world!");
    Message message2("Welcome to the class.");

    std::cout << "Printing message1:" << std::endl;
    message1.print();

    std::cout << "\nPrinting message2:" << std::endl;
    message2.print();

    std::cout << "\nPrinting message1 with additional message:" << std::endl;
    message1.print("Have a great day!");

    return 0;
}

