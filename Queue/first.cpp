#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int>a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    a.front() = 0;
    a.back() = 5;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;  

    cout<<a.empty()<<endl;
    cout<<"this is the size"<<endl;
    a.push(6);
    cout<<a.size()<<endl;
    cout<<"printing the whole queue "<<endl;

    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;
    

}