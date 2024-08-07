//23070123039
// om bhombe
#include <iostream>
using namespace std;

int main() {

    int rows;
    int k=1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows ; ++i)
    {
        for(int j = 1; j <= i ; ++j)
        {
            cout << k<<' ';
            k++ ;
            
        }
        cout << endl;
    }

    return 0;
}
/*Enter number of rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 */
