/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include <iostream>
#include <string>
using namespace std;

class Cat{
    private:
            string name;
            string breed;
            int age;
    public:
            void setName(string n){
                name = n;
            }
            void setBreed(string n){
                breed = n;
            }
            
            void printInfo(){
                cout<<name<<" "<<breed<<" "<<age;
            }
            
            void setAge(int n){
                age = n;
            }
            string getName(){
                return name;
            }
            string getBreed(){
                return breed;
            }
            int getAge(){
                return age;
            }
};

