#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l = {1,2,3,4,5,6};
    for(int l : l){
        // cout<<l<<endl;
    }

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;


}