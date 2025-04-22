#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int>a = {1,2,3};
    a.push_back(4);
//    cout<< a.at(0)<<endl;
//    cout<<a[0]<<endl;

   a.push_back(6);
//    cout<<a.at(4)<<endl;
// cout<<a.front()<<endl;
// cout<<a.back()<<endl;

// cout<<a.at(4)<<endl;
// cout<<a.size()<<endl;

a.push_back(9);
// cout<<a.back()<<endl;
// a.pop_back();
// cout<<a.back()<<endl;
// a.at(0) = 7;
a[0] = 8;
cout<<a[0]<<endl;


}