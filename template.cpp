/*Goal: study generic classes
**Fix the program by completing
**the constructor. It should 
**assign a default value to each
**element in the array.*/

#include "main.hpp"

int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(0);// TODO: add a default value using a constructor
    srInt.setId(123456);
    int arrayInt[SIZE]={1,2,3,4};
    srInt.setGrades(arrayInt);
    srInt.printGrades();
 
    StudentRecord<char> srChar('-');// TODO: add a default value using a constructor
    srChar.setId(234567);
    char arrayChar[SIZE]={'F','F','F','F','E'};
    srChar.setGrades(arrayChar);
    srChar.printGrades();
   
    StudentRecord<float> srFloat(0.1);// TODO: add a default value using a constructor
    srFloat.setId(345678);
    float arrayFloat[SIZE]={2.75,4.0,3.7,2.8,3.99};
    srFloat.setGrades(arrayFloat);
    srFloat.printGrades();
    
    StudentRecord<string> srString("A+");// TODO: add a default value using a constructor
    srString.setId(456789);
    string arrayString[SIZE]={"B","B-","C+","B","A"};
    srString.setGrades(arrayString);
    srString.printGrades();
    
    return 0;
}

//header file for main.cpp

#include<iostream>

using namespace std;

const int SIZE = 5;
template <class T>
class StudentRecord
{
    private:
        const int size = SIZE;
        T grades[SIZE];
        int studentId;
    public:
        StudentRecord(T defaultInput);//A default constructor with a default value
        void setGrades(T* input);
        void setId(int idIn);
        void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T defaultInput)
{
    //TODO: allocate memory for the array
    //by assigning a default value to each
    //array element.
    for (int i = 0; i<size; i++){
        grades[i] = defaultInput;
    }
}


template<class T>
void StudentRecord<T>::setGrades(T* input)
{
    for(int i=0; i<SIZE;++i)
    {
        grades[i] = input[i];
    }
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    std::cout<<"ID# "<<studentId<<": ";
    for(int i=0;i<SIZE;++i)
        std::cout<<grades[i]<<"\n ";
    std::cout<<"\n";
}

