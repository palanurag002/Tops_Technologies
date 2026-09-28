#include <iostream>
using namespace std;

class UserProfile {
private:
    string phoneNumber;

public:
    void setPhoneNumber(string number) {
        phoneNumber = number;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

 main() {
    UserProfile user;

    user.setPhoneNumber("8899445566");

    cout << "Phone Number: " << user.getPhoneNumber();

    
}
