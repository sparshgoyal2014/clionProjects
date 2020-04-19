#include <iostream>
using namespace std;

int main() {
    int arr[][5]  = {1,2,3,4,5,6,7,8,9};
    cout << arr[1][4] << endl;
    int i = 5;
    int *ptr = &i;

    cout << "********" << endl;
    cout << *(ptr+ 10) << endl;

    int************************************************************************************************** a = nullptr;
    return 0;
}
