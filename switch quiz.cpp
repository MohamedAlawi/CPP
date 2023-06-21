#include <iostream>
using namespace std;

int main()
{
    float in1, in2;
    std::cout << "Enter two numbers:\n";
    std::cin >> in1;
    std::cin >> in2;
    std::cout << "Enter the operation '+','-','*','/':\n";
    char operation;
    std::cin >> operation;

    switch(operation){
        case '+':
            cout << in1+in2 << "\n";
            break;
        case '-':
            cout << in1-in2 << "\n";
            break;
        case '*':
            cout << in1*in2 << "\n";
            break;
        case '/':
            if (in2 != 0)
            {
                cout << in1/in2 << "\n";
            }
            else
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Wrong operation. Please enter '+', '-', '*', or '/' only.\n";
    }
    return 0;
}
