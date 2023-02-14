#include <iostream>

using namespace std;
int main(){


    const int  arrayLength= 5;

    int array[arrayLength]= {1, 2, 3, 4, 5};
    int arrayCopy[arrayLength];
    int reversedArray[arrayLength];


    for( int i = 0, k = 4; i<arrayLength ; i++, k--) {
        //This stores the values of the first array into the second array
        arrayCopy[i]= array[i];

        //This method returns the array backwards
        reversedArray[k] = array[k];

    }

    //These two for loops prints out each one of the arrays
    for (int i = 0; i < arrayLength; i++) {
        cout<<arrayCopy[i]<<endl;

    }

    for (int i = 0; i < arrayLength; ++i) {
        cout<<reversedArray[i]<<endl;

    }

    return 0;
}
