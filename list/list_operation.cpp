#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l = {1,2,3,4,5,6};
    // add element 
    l.push_back(7);
    l.push_front(0);
// We can not access list elelment directly 
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.back() = 8;
    l.front() = 11;
    cout<<"This is printing after push the element in front and back ";
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;

    // printing all the elements
    cout<<"This is pringt via loop "<<endl;
    for(int i : l)
    cout<<i<<endl;

}

