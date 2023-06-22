/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
using namespace std;

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    int arr[4][4];
    for (int i = 0; i<4; i++){
        
        for (int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    int v[4];
    for (int i = 0; i<4; i++){
        cin>>v[i];
    }
    
    int vv[4];
    int sum = 0;
    for (int i = 0; i<4; i++){
        sum = 0;
        for (int j = 0; j<4; j++){
            sum = sum + (arr[i][j])*v[j];
        }
        vv[i] = sum;
    }
    
    for (int i = 0; i<4; i++){
        cout<<vv[i]<<" ";
    }
    //Print the resultant product vector
    
    return 0;
}