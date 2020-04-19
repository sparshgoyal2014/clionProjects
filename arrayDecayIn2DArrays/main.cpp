#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    cout << arr << endl;
    cout << *arr << endl;
    cout << **arr << endl;

    int qrr[5] = {1,2,3,4,5};
    int *ptr1 = qrr;
    int ** ptr = arr;
    cout << arr+1 << endl;
    cout << &arr[0][1] << endl;

    char arr2[3][4] = {"abc", "def", "ghi"};

    cout << arr2 << endl;
    cout << *arr2 << endl;
    cout << **arr2 << endl;
    return 0;
}
