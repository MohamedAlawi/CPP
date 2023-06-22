/*Goal: Practice writing generic functions*/

#include "main.hpp"

int main()
{
    int a = 90;
    int b = 1; 
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);
    return 0;
}


#include<iostream>
using namespace std;

/* template <typename T>
T findSmaller(T  input1,T  input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}
*/

template <typename T>
T sumTwo (T input1, T input2){
   return input1 + input2;
}