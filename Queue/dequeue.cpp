#include<iostream>
#include<queue>
using namespace std;

int main(){
deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

cars.push_back("Harrier");
cars.push_front("swift");

for(string car : cars){
    cout<<car<<" ";
}

cout<<endl;
cout<<cars.at(0)<<endl;
cout<<cars[0]<<endl;

}