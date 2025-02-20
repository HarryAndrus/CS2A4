#include "NumberArray.h"
#include <iostream>

using namespace std;


// constructor
 NumberArray::NumberArray(int arraySize) {
    if (arraySize <= 0) {
        throw invalid_argument("Array Size must be greater then or equal to one.");
    }
    size = arraySize;
    array = new float[arraySize](); // using new type[size](); initializes all elems to 0
 }

// destructor
 NumberArray::~NumberArray() {
    delete[] array;
    array = nullptr;
 }

void NumberArray::storeNumber(int index, float num) {
    if (index < size) {
        array[index] = num;
    }
}

float NumberArray::retrieveNumber(int index) const {
     if (index < size) {
         return array[index];
     } else {
         return -1;
     }
 }

float NumberArray::getHighest() const {
     float max = array[0];
     for (int i = 0; i < size; i++) {
         if (array[i] > max) {
             max = array[i];
         }
     }
     return max;
 }

float NumberArray::getLowest() const {
     float min = array[0];
     for (int i = 0; i < size; i++) {
         if (array[i] < min) {
             min = array[i];
         }
     }
     return min;
 }

float NumberArray::getAverage() const {
     float sum = 0.0;
     float average = 0.0;

     for (int i = 0; i < size; i++) {
         sum += array[i];
     }

     average = (sum / size);

     return average;
 }




