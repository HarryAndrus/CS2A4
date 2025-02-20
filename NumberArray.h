#ifndef NUMERARRAY_H
#define NUMERARRAY_H

class NumberArray {
private:
    float* array = nullptr;
    int size = 0;

public:
    NumberArray(int size);
    ~NumberArray();

    // prototypes
    void storeNumber(int index, float number);
    float retrieveNumber(int index) const;
    float getHighest() const;
    float getLowest() const;
    float getAverage() const;
};

#endif
