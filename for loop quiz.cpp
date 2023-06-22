/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include <iostream>
using namespace std;

int main(){
    
    float sum = 0;
    float avg, num;
    
    for (int i = 0; i<5; i++){
        
        cout<<"enter number "<<(i+1)<<": ";
        cin>> num;
        cout<<endl;
        sum = sum + num;
        
    }
    cout<<endl<<sum<<endl;
    avg = sum/5;
    cout<<avg;
    return 0;
}
