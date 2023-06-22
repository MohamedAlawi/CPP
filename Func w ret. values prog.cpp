
// header file
#include <iostream>
using namespace std;
void printEquation(int m1, int m2, int sum, char operation);
int sum(int m1, int m2);
void printEquation(int m1, int m2, int sum, char operation) 
{
    
    cout<<"m1 "<<operation<<" m2 = "<<sum;
}

int sum(int m1, int m2)
{
return m1+m2; 
    
} // end of header file

// main function
#include "main.hpp"

int main(){
    
    printEquation(2,2,sum(2,2),'+');
    return 0;
}
