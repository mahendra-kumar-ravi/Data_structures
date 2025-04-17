#include<iostream>
using namespace std;
void swapping(int &a, int& b){
    swap(a,b);

}

int main(){
    int a = 10, b=20;
    cout<<"Before swapping :"<<a<<" "<<b<<endl;
    swapping(a,b);
    cout<<"After swapping :"<<a<<" "<<b<<endl;

}