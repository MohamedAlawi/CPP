/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int givenInt;
    cin >> givenInt;

    float givenFloat;
    cin >> givenFloat;

    double givenDouble;
    cin >> givenDouble;

    char givenChar;
    cin >> givenChar;

    cin.ignore(); 

    string givenString;
    getline(cin, givenString);

    cout << "Value of givenInt: " << givenInt << endl;
    cout << "Address of givenInt: " << &givenInt << endl;

    cout << "Value of givenFloat: " << givenFloat << endl;
    cout << "Address of givenFloat: " << &givenFloat << endl;

    cout << "Value of givenDouble: " << givenDouble << endl;
    cout << "Address of givenDouble: " << &givenDouble << endl;

    cout << "Value of givenChar: " << givenChar << endl;
    cout << "Address of givenChar: " << static_cast<void*>(&givenChar) << endl;

    cout << "Value of givenString: " << givenString << endl;
    cout << "Address of givenString: " << &givenString << endl;

    return 0;
}
