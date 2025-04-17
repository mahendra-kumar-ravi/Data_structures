#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero error!");
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
