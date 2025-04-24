#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>cars;
    cars.push("volvo");
    cars.push("Thar");
    cars.push("swift");
    cars.push("mahindra");

    // Traversal
    while(!cars.empty()){
        cout<<cars.front()<<" ";
        cars.pop();
    }
    cout<<endl;
}
