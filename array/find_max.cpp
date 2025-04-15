#include<iostream>
using namespace std;


int Max_ele(int arr[7]){
    int max = arr[0];
    for(int i =0;i<7;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;

}

int main(){
    int a[7] = {54,565,4,5,434,666,434};
    int maximum = Max_ele(a);
    cout<<"maximum Element is : "<<maximum<<endl;
    
}