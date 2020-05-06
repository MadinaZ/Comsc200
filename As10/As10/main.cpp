//
//  main.cpp
//  As10
//
//  Created by Madina Sadirmekova on 5/4/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <chrono> // chrono
#include <cstdlib> // srand, rand
#include <ctime> // time
#include <algorithm> // sort
#include <iostream>
using namespace std;

class Timer {
    // Type aliases to make accessing nested type easier
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1> >;

    std::chrono::time_point<clock_t> m_beg;

public:
    Timer() : m_beg(clock_t::now()) {}
    void reset() { m_beg = clock_t::now(); }
    double elapsed() const {
        return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
    }
};

void InsertSort(int* a, int size)
{
    int i, val, j;
      for (i = 1; i < size; i++)
      {
          val = a[i];
          j = i - 1;

          while (j >= 0 && a[j] > val)
          {
              a[j + 1] = a[j];
              j = j - 1;
          }
          a[j + 1] = val;
      }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int *a, int size)
{
    int i, j, min;

      for (i = 0; i < size-1; i++)
      {
          min = i;
          for (j = i+1; j < size; j++)
          if (a[j] < a[min])
              min = j;

          swap(&a[min], &a[i]);
      }
}

void show(int *a) {
    for(int i=0; i<5; i++)
        cout << a[i] << " ";
    cout<<endl;
}

int main() {
    const int Size = 10000;
    int array1[Size];
    int array2[Size];

    srand (time(NULL));
    int fill;
    for(int i=0; i<Size; i++) {
        array1[i] =array2[i] = rand() % 100003; // next prime 10X
    }

    show(array1);
    show(array2);


    Timer t1;
    InsertSort(array1, Size);
    double run1 = t1.elapsed();
    show(array1);

    Timer t2;
    SelectionSort(array2, Size);
    double run2 = t2.elapsed();
    show(array2);
    cout << "Insertion Sort Time: " << run1 << " seconds\n"
        << "Selection Sort Time: " << run2 << " seconds\n"
        << "Efficiency: " << int( run1/run2 );

    return 0;
}

