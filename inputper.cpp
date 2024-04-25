#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string address;
    string idNumber;

public:
    string name;
    string phoneNumber;
    string email;
    void inputInfo() {
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your phone number: ";
        getline(cin, phoneNumber);

        cout << "Enter your address: ";
        getline(cin, address);

        cout << "Enter your ID number: ";
        getline(cin, idNumber);

        cout << "Enter your email: ";
        getline(cin, email);
    }

    // // Display method(checking input)
    // void displayInfo() {
    //     cout << "\nEntered Information:\n";
    //     cout << "Name: " << name << "\n";
    //     cout << "Phone Number: " << phoneNumber << "\n";
    //     cout << "Address: " << address << "\n";
    //     cout << "ID Number: " << idNumber << "\n";
    //     cout << "Email: " << email << "\n";
    // }
};

int main() {
    Person user;
    user.inputInfo();
    // user.displayInfo();

    return 0;
}

