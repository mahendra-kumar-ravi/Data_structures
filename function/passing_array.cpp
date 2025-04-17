#include<iostream>
using namespace std;
void fun(int arr[]){

    for(int i = 0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
 int arr[] = {1,2,3,4,5,67};
fun(arr);
}
