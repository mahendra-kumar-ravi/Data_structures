#include<iostream>
using namespace std;


int find_ele(int arr[5],int key){
    for(int i =0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element found at index : "<<i<<endl;  
            return 0;
        }
    }
    cout<<"Element not found : "<<endl;
    return 0;
}

int main(){
    int arr[7] = {43,353,33,345,645,33,343};
    find_ele(arr,00);
    return 0;
}