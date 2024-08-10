//Name:om bhombe
//PRN:23070123039
//Aim:Implemention of Decision Making Statements Loops to Check Passcode using While Loop

#include <iostream>
using namespace std;

int main() {
    int password = 2344;
    int user_password;

    cout << "Enter the password: ";
    cin >> user_password;

    while (password > 0) {
        if (password != user_password) {
            cout << "Incorrect Password.\n";
            cout << "Enter the password: ";
            cin >> user_password;
        } 
        else {
            cout << "System is Unlocked" << endl;
            break;
        }
    }

    return 0;
}
/*Enter the password: 2344
System is Unlocked*/
