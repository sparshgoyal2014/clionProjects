#include <iostream>
#include <cstring>

using namespace std;

int main() {
    /*
     * char* arr = {'a'};
     char* arr2 = "abcd";

     int iValue = 10;

     int* ptr = {1,2,3,4};
     */

    const char * charArray = "abcde";
    charArray = "tuyr";

    *charArray = 'o'; // run time error
    cout << *charArray << endl;
    cout << charArray << endl;
    cout << charArray+1 << endl;

    char cArray[5] = {'s', 'w', 'a', '\0', 'd'};
    cout << strlen(cArray) << endl;

    const char*  charPointer = cArray;
    charPointer[0] = 't';
    cout << charPointer << endl;

    const char arr2[10] = "hello";  // may be array of constant characters
    arr2[0] = 'a';

    char* charArray2 = (char*)"StringLiteral";

    const char* string1 = "StringOne";
    char* string2 = string1;

    char const charArray3[] = {'a', 'b'};

    char charArray4[5] = "abc";

    char const* ptr = &charArray3[0];

    char* charArray5 = charArray4;

    const char charArray6[5] = "art";
    char charArray7[5] = "mus";

    int arr[5] = {1,2,3,4,5};

    int* ptrToArr = {1,2,3,4,5};



//    int arr3[5] = arr;  // array initializer must be an initializer list.  unless it will give me error(if list is not used)




    return 0;
}
