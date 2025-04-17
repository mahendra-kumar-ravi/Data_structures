#include<iostream>
using namespace std; 
int main(){
    enum level{
        low = 0,
        medium=43,
        high=41
    };
    // enum only take the integer type values not any character type
    // if you want to give the character values you have to write a function and you have to return the values from the function 

    level myvar = high;
    cout<<myvar<<endl;
}