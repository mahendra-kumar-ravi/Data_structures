#include<iostream>
using namespace std;

void Draw(int n)
{
    
    //Draw Pattern given in description for n x n dimensions
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
        
    }
   
}

int main()
{
    int n;
    cout<<"Enter the size fo pattern ";
    cin>>n;
    Draw(n);
}