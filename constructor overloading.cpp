/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

/* Dog d1;
    Dog d2("Kali");
    Dog d3(12345);
    Dog d4("Sammy", 65432);
    */
    
class Dog{
    
    private:
            string name;
            int license;
    public:
            Dog(){
                name = "NA";
                license = 0;
            }
            
            Dog(string n){
                name = n;
                license = 0;
            }
            
            Dog(int n){
                name = "NA";
                license = n;
            }
            
            Dog(string n, int nn){
                name = n;
                license = nn;
            }
            
            string getName(){
                return name;
            }
            int getLicense(){
                return license;
            }
};
/*Goal: create a class that has two 
*constructors; one that accepts
*input parameters and one that does
*not. 
*/

#include "main.hpp"

int main()
{
    Dog d1;
    Dog d2("Kali");
    Dog d3(12345);
    Dog d4("Sammy", 65432);
    
    cout<<d1.getName()<<" "<<d1.getLicense()<<"\n";
    cout<<d2.getName()<<" "<<d2.getLicense()<<"\n";
    cout<<d3.getName()<<" "<<d3.getLicense()<<"\n";
    cout<<d4.getName()<<" "<<d4.getLicense()<<"\n";
    return 0;
}