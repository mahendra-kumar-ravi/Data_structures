#include<iostream>
#include<stack>
#include<vector>
using namespace std;
#

int main(){
    
    stack<string>cars ;
    cars.push("volvo");
    cars.push("Farai");
    cars.push("Lambo");
    cars.push("Thar");

    cout<<cars.top()<<endl;
    cars.pop();
    cout<<cars.top()<<endl;
    cars.push("Mahindara");
    cout<<cars.top()<<endl;
    // 0 for the not empty  1 for empty
    cout<<cars.empty()<<endl;
    
}