#include<iostream>
using namespace std;

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void displayArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

void selectionSort(int arr[], int size){
    int minIndex, i, j;
    for(i=0; i<size; i++){
        minIndex = i;

        for(j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

void insertionSort(int arr[], int size){
    int key, i, j;
    for(i=1; i<size; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j=1] = key;
    }

}

int main(){
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array Elements: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Array After selection Sort: " << endl;
    selectionSort(arr, size);
    displayArray(arr, size);

    return 0;
}