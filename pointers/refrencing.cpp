#include<iostream>
using namespace std;

int main(){
    string name = "pranav";
    string *name2 = &name;
    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<name2<<endl;
    
    return 0;

}