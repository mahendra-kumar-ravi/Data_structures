#include<iostream>
using namespace std;

class a{
    public:
    string p = "This is the class a";

};
class b{
    public:
    string q = "this is the class b ";

};
class c : public a, public b{
    public:
    string r = "this is the class c ";

};

int main(){
    c obj;
    cout<<"Accessing a class element "<<obj.p<<endl;
    cout<<"Accessing b class element "<<obj.q<<endl;
    cout<<"Accessing c class element "<<obj.r<<endl;
}