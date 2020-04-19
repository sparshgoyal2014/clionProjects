#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements : " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }


    cout << endl;

    int key;
    cout << "Enter element to be searched :";
    cin>>key;
    cout << "Index is :" << linearSearch(arr, size, key)<< endl;


    return 0;
}