// #include<iostream>
// using namespace std;
// int fun(int n){
   
//     if(n<=1){
//         return n + fun(n-1);
//     }

// }
// int main(){
//    int sum =  fun(5);
// cout<<sum<<endl;
// return 0;
// }

#include <iostream>
using namespace std;

int fun(int n) {
    if (n <= 0) { // Corrected base case: stop at 0 or less
        return 0;
    } else {
        return n + fun(n - 1); // Recursive step: return the sum of n and the recursive call
    }
}

int main() {
    int sum = fun(5);
    cout << sum << endl;
    return 0;
}