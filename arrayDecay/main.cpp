#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,4};

    int const arr3[4] = {4,5,1,7};
    arr3[0] = 4;

    int x = 5;
    const int* ptr = &x;

    x = 6;
    cout << *ptr << endl;

    const int y = 4;
    const int* ptr2 = &y;



    return 0;
}
