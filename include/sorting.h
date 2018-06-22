//
// Created by Aman Fatehpuria on 6/20/18.
//

#ifndef ALGORITHMS_SORTING_H
#define ALGORITHMS_SORTING_H

#include <iostream>
#include <stdio.h>

class sorting {
public:

    int iarr;
    float farr;
    /**
     *\brief class containing various sorting algorithms
     * \note constructor for sorting array of ints
     * @param arr array of integers to be sorted
     */
    sorting(int arr[]);

    /**
     * \note constructor for sorting floats
     * @param arr array of floats to be sorted
     */
    sorting(float arr[]);

    void BubbleSort(int arr[], int len_arr);

    void PrintArray(int arr[], int len_arr);

    void PrintArray(float arr[], int len_arr);


private:

    void swap(int *a, int *b);

    void swap(float *a, float *b);


};

#endif //ALGORITHMS_SORTING_H
