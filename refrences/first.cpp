#include<iostream>
using namespace std;
int main(){
    string food = "Pizza";
    string &meal = food;
    int num = 20;
    int &num1 = num;
    // cout<<num1<<endl;
    // cout<<num<<endl;
    cout<<food<<endl;
    cout<<meal<<endl;
    // changing the refrence is also change the value of the main variable 

    meal = "Burgar";
    cout<<food<<endl;
    cout<<meal<<endl;
}

