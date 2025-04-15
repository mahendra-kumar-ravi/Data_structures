#include<iostream>
using namespace std;
class grandpa{
    public:
    string g = "mere data 100 saal ke the ";
};
class pa : public grandpa{
    public:
    string p = "Mere papa 60 saal ke hai ";
};
class  child : public pa{
    public: 
    string c = "Mai hu mahendra";
};

int main(){
    child c_obj;
    pa p_obj;
    // cout<<"Accessing pa class using chaild object "<<c_obj.g<<endl; // it is also accessible 
    cout<<"Accessing grandpa class using pa object "<<p_obj.p<<endl;

}
