#include<iostream>
using namespace std; 
int main(){
    try{
        int age ;
        cout<<endl<<" Enter your age ";
        cin>>age;
        if(age>=18){
            cout<<"you are Eligible for the vote "<<endl;

        }
        else{
            throw(age);
        }
    }
    catch(int num){
        cout<<"You are not Eligible for vode "<<endl;
        cout<<"you are "<<num<<"Year old "<<endl;
    }
  
}