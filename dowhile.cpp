//23070123039
//om bhombe
#include <iostream>
using namespace std;

int main() {
    string name;
    
    do {
        cout << "Enter the Name: ";
        cin >> name;
        if (name != "SIT") {
            cout << name << endl;
        }
    } while (name != "SIT");
}
/*Enter the Name: bhg
bhg
Enter the Name: SIT*/
