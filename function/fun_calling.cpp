#include<iostream>
using namespace std;
void fun(string s);
int main(){
    string s = "This is string";
fun(s);
}
void fun(string s)
{
    cout<<s<<endl;
    cout<<"This is function 1 "<<endl;
}