//
// Created by Aman Fatehpuria on 6/20/18.
//

#ifndef ALGORITHMS_SORTING_H
#define ALGORITHMS_SORTING_H

#include <iostream>
#include <stdio.h>

typedef unsigned int uint;

class sorting {
public:

    int* iarr;
    uint len;
    // float farr;
    /**
     *\brief class containing various sorting algorithms
     * \note constructor for sorting array of ints
     * @param arr array of integers to be sorted
     */
    sorting(int* pArr, uint nLen);

    ~sorting(void);

    /**
     * \note constructor for sorting floats
     * @param arr array of floats to be sorted
     */
    // sorting(float arr[]);

    /**
    *\note the following three Sorting Algs have a O(n^2)
    *
    */

    void BubbleSort(void);

    void InsertionSort(void);

    void SelectionSort(void);

    /**
    *\note PrintArray is an helper function used to print the array
    *
    */
    void PrintArray(void);

    // void PrintArray(float arr[], int len_arr);


private:

	/**
	*\note swap is an helper function used to swap 2 elements of an array
	*@param uint a index of the first element to be swapped
	*@param unit b index of the 2nd element to be swapped
	*/
	void swap(uint a, uint b);

    // void swap(float *a, float *b);


};

#endif //ALGORITHMS_SORTING_H
