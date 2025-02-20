#include <iostream>
#include "NumberArray.h"

using namespace std;

void allocateArray(NumberArray &numbers, int size) {
    for (int i = 0; i < size; i++) {
        float value = 0;
        cout << "What value should be at index " << i << endl;
        cin >> value;
        numbers.storeNumber(i, value);
    }
    cout << endl;
}

void retrieveNumbers(NumberArray numbers, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": " << numbers.retrieveNumber(i) << endl;
    }
}



int main() {
    int size = 0;

    cout << "How many elements should the array have? " << endl;
    cin >> size;
    NumberArray numbers(size);

    allocateArray(numbers, size);
    retrieveNumbers(numbers, size);

    cout << endl << "Highest number: " << numbers.getHighest() << endl;
    cout << "Lowest number: " << numbers.getLowest() << endl;
    cout << "Average: " << numbers.getAverage() << endl;

  return 0;
}

