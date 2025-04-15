#include<iostream>
using namespace std;
int main(){
	// int a[10] = {1,2,3,4,5,6,7};
	// int a[5] ={2,3,4,5,7};
	// for(int i =0;i< 5;i++)
	// cout<<a[i]<<endl;

	float b[] = {1.2,3.4,5,44.5,3,33.4};   
// for(float x : b)
	// for(auto x : b){ // for this no need to mention the type of the array 
	// cout<<++x<<" ";
	for(auto &x : b){ // for this no need to mention the type of the array 

		cout<<++x<<" ";
}
cout<<endl;
for(auto x:b){
	cout<<x<<" ";
}
return 0;
}
