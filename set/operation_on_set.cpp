#include<iostream>
#include<set>
using namespace std;

void inset(set<int>&a, int n){
    int value;
    for(int i =0;i<n;i++){
        cout<<"Enter the value ";
        //takes only unique values 
        cin>>value;
        a.insert(value);

        }
        cout<<"Values inserted Successfully "<<endl;
    }

void display(set <int>a,int n){
    cout<<"the values are "<<endl;
    for(int i : a)
    cout<<i<<" ";
    cout<<endl;

    cout<<"Values printed successfully "<<endl;
}

int main(){
    int n;
    cout<<"Enter the size fo set ";
    cin>>n;
    set<int>a;
    inset(a,n);
    display(a,n);
}
