//
//  SortableVector.h
//  As07
//
//  Created by Madina Sadirmekova on 3/23/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef SortableVector_h
#define SortableVector_h
#include"SimpleVector.h"

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
    void Sort();
    //Default Constructors
    SortableVector() : SimpleVector<T>()
    {}
    //Constructor
    SortableVector(int size) : SimpleVector<T>(size)
    {}
    //Copy Constructor
    SortableVector(const SortableVector &obj)
    {
        for(int i = 0; i < this->size(); i++)
            this->operator[](i) = obj[i];
    }
};

template <class T>
void SortableVector<T>::Sort()
{
    bool swap = true;
    while(swap)
    {
        swap = false;
        for(int i = 0; i < this->size()-1; i++)
        {
            if(this->operator[](i) > this->operator[](i+1)){
                T temp = this->operator[](i+1);
                this->operator[](i+1) = this->operator[](i);
                this->operator[](i) = temp;
                swap = true;
            }
        }
    }
}

#endif /* SortableVector_h */
