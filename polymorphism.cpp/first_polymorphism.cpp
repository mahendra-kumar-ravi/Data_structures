#include<iostream>
using namespace std;
class Animal{
    public:
    void sound(){
        cout<<"Aninals has different different types of sounds "<<endl;

    }
};
class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog is barking "<<endl;
    }
};

class cat : public Animal{
    public:
    void sound(){
        cout<<"Cat sounds like  mew - mew"<<endl;
    }
    

};

int main(){
    Animal a;
    a.sound();
    Dog d;
    d.sound();
    cat c;
    c.sound();

}