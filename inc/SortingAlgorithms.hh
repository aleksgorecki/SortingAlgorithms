#ifndef SORTINGALGORITHMS_HH
#define SORTINGALGORITHMS_HH

#include "../inc/ArrayTools.hh"




template <typename T>
void Quicksort(T* array, int startPoint, int endPoint, const char order)
{
    if(startPoint < endPoint)
    {
        int i = ArrayTools::Partition(array, startPoint, endPoint, order);
        Quicksort(array,  startPoint, i-1, order);
        Quicksort(array, i+1, endPoint, order);
    }
}


template <typename T>
void Heapsort(T* array, int startPoint, int endPoint, const char order)
{

}


template <typename T>
void Mergesort(T* array, int startPoint, int endPoint, const char order)
{

}


template <typename T>
void Introsort(T* array, int startPoint, int endPoint, const char order)
{

}



#endif