#include<set>
#include<iostream>
using namespace std;

int main(){
set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Remove elements
cars.erase("Volvo");
cars.erase("Mazda");
for(string s: cars){
    cout<<s<<" ";

}
cout<<endl;
}