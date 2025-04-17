#include<iostream>
using namespace std;

int numplus(int a, int b){
    return a+b;
}
double numplus(double a, double b){
    return a+b;
}

int main(){
    int result = numplus(3,5);
    double res = numplus(3.4, 3.2);
    cout<<result<<" "<<endl <<res<<endl;
    return 0;
}
