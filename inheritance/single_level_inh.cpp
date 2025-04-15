#include<iostream>
using namespace std ;

class manish{
    public:
    string m = "kaise ho manish ";
};
class harry : public manish{
    public:
    string h = "Badhiya hu harry ";
};
int main(){
    harry h_obj;
    cout<<h_obj.m<<endl;
    cout<<h_obj.h<<endl;


}