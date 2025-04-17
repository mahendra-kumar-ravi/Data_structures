#include<iostream>
using namespace std;
void fun(string s = "Manish Bhaai... "){
    cout<<s<<endl;
}
int main(){
  fun("kavita");
  fun(".");
  fun("chale phir ");
}
void fun()
{
    cout<<"This is function 1 "<<endl;
}
