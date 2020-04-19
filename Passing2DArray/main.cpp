#include <iostream>
using namespace std;


int display(int (*arr)[3]){
    return *(*arr + 1);
}
int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    int * p = *arr;
    cout <<  *(*arr + 1) << endl;

    cout << "===============" << endl;

    cout << display(arr) << endl;
    return 0;
}
