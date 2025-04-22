#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &a, int n){
    int m;
    for(int i = 0; i<n;i++){
        cout<<"enter the value ";
        cin>>m;
        a.push_back(m);
        
    }
    

}
void display(vector<int> &a){
    for(int i:a){
        cout<<i<<endl;
    }
}

int main(){
    vector<int> a ;
    int n;
    cout<<"Enter the range of vector ";
    cin>>n;
    insert(a,n);
    display(a);
}