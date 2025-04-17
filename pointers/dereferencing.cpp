#include<iostream>
using namespace std;

int main(){
    string name = "Rahul";
    string *name2 = &name;

    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<&name2<<endl;
    
    cout<<name2<<endl;
    cout<<*name2<<endl;

    //Dereffrencing 
    cout<<*name2<<endl;


}