#include <iostream>
using namespace std;

int main() {
//    int n;
//    cout << " enter the size of An Array " << endl;
//    cin >> n;
//    int arr[n];
//
//    cout << "Enter all the elements: " << endl;
//
//    for(int i=0; i<n; i++){
//        cin >> arr[i];
//        cout << arr[i] <<" " ;
//    }

    int arr[5] = {1,2,3,4,5};

    if(arr[-1] > arr[0]){
        cout <<"inside if:" << endl;
    }else if(arr[-1] < arr[0]){
        cout << "Inside Else of: " << endl;
    }

    cout << " outside Both " << endl;
    cout << arr[100] << endl;


    return 0;
}
