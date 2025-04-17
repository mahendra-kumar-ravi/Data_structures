#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream any_name("file1.txt");

    any_name<<"i am changing  the things "<<endl;


    any_name.close();
    return 0;

}