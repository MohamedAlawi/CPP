/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
    {
        cin>> userInput[i];
    }
    
    for(int i = 0; i <40; i++)
    {
    cout << userInput[i] <<" ";
    }
    cout<<endl;
     for(int i = 39; i >=0; i--)
    {
    cout << userInput[i] <<" ";
    }
    
    int temp;
      for(int i = 0; i <40; i++)
    {
        for (int j = i+1; j<40; j++){
            
            if (userInput[i] > userInput[j]){
                temp = userInput[i];
                userInput[i] = userInput[j];
                userInput[j] = temp;
            }
        }
    }

 for(int i = 0; i <40; i++)
    {
    cout << userInput[i] <<" ";
    }
    return 0;
}