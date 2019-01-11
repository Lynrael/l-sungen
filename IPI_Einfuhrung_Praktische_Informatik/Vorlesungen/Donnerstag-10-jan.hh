#ifndef CLASSES_HH
#define CLASSES_HH

#include <iostream>

class FloatArray {
    public:
        virtual ~FloatArray() {};
        virtual float& operator[](int i) = 0;
        virtual int numIndices() = 0;
        virtual int minIndex() = 0;
        virtual int maxIndex() = 0;
        virtual bool isMember(int i) = 0;
};

#endif //CLASSES_HH