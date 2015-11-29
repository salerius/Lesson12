#pragma once
#include <iostream>


namespace MyArray
{


    class SmartDoubleArray
    { 
        
    public:
        SmartDoubleArray();
        ~SmartDoubleArray();
        void add(int value);
        void insert(int value, int index);
        void remove(int index);
        int count(int value) const;
        int findNext(int value, int index) const;
        int getSize() const;
        int getCapacity() const;
        int operator[](int index);
        int getAt(int index) const;
        friend std::ostream& operator<<(std::ostream& os, const SmartDoubleArray& chiefPointer);

    private:
        int getValueOfIndex(int index) const;
		void expandingArray(int capacity, int* &tempArray);
        bool indexCheck(int index) const;
        int *chiefPointer;
        int size;
        int capacity;
    
    };

}
