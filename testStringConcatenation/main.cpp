#include <iostream>
using namespace std;

int main() {
    string str1 = "Hello";
    cout << &str1 << endl;

    str1 = str1+"world!";

    cout << str1 << endl;
    cout << &str1 << endl;

    return 0;
}
