#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int i, key, j;

    for(i=1; i<size; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

void displayArray(int arr[], int size){
    for(int i=-0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cout << "enter the size of the array: " << endl;
    cin >> size;

    int arr[size];

    cout << " Enter the elements: " << endl;

    for(int i=0; i< size; i++){
        cin >> arr[i];
    }

    cout << "After insertion: " << endl;
    insertionSort(arr, size);

    displayArray(arr, size);

    return 0;
}