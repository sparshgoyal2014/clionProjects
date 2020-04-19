#include <iostream>
using namespace std;

void display(int arr[5]){
    cout << arr << endl;
}


int main() {


    /**char Array*/
    char array[5] = "abcd";
    cout << array << endl;  // operator overloading // array is a constant pointer can not be reassigned // array stores the address of the first element
    cout << &array << endl;  // address of the pointer
    cout << &array[0] << endl; // address of the first element of the character
    cout << *&array << endl;  // address of the first element of the array but operator is overloaded so when it sees the address it prints the string until it reaches then first null character in the string
    cout << &*array <<endl;  // same explanation as above
    cout << * array << endl;  // As array stores the address of the first element of the array so it Dereferences to the first element of the array


    /***Some tests ***/

    char array2[5] = "efgh";

    char* ptr = array2;
    cout << ptr << endl;
    ptr[0] = 'a';
    cout << ptr << endl;

    const char* charPointer = "goyal";
    char* const ptr2 = "asf";
    char* ptr3 = "spartsh";

    char* ptr4 = (char*)charPointer;

    cout << (const int )5 << endl;

    const int number = 7;

    cout << sizeof(const int) << endl;
    cout << sizeof(int) << endl;

    const int number2 = 10;
    int  number3 = number2;
    number2 = 4;

    int number4 = 4;
    int number5 = 5;

    const int* num1Pointer = &number4;
    int* num2Pointer = (int*)num1Pointer;

    display()

    char* ptr = "hello";

    int numArray[5] = {1,2,3,4,5};
    int numArray2[5];
    numArray2 = numArray;

    int* ptrToArray = numArray;   // here numArray is l-Value  // l-value can also be on the right side

    char charArray1[] = "name";
    char charArray2[] = charArray1;

    cout << {1,2,3,4,5} << endl;





    /***char pointer***/


    //**** MUST SEE ****//
    // Ultimate link
// https://stackoverflow.com/questions/3316562/const-pointer-assign-to-a-pointer




    return 0;
}
