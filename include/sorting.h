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
        sorting(int array[]);

        /**
        * \note constructor for sorting floats
        * @param arr array of floats to be sorted
        */
        sorting(float array[]);


        /**
         * \brief implements the bubblesort algorithm on array of floats
         * @param arr
         * @param len_arr
         */
        void BubbleSort(float arr[], int len_arr);

        /**
         * \brief used to print arrays of ints
         * @param arr
         * @param len_arr
         */
        void PrintArray(int arr[], int len_arr);


        /**
         * \brief used to print array of floats
         * @param arr
         * @param len_arr
         */
        void PrintArray(float arr[], int len_arr);


        /**
         * \brief implements the bubblesort algorithm on array of integers
         * @param arr
         * @param len_arr
         */
        void BubbleSort(int arr[], int len_arr);


    private:

        /**
         * \brief helper function used to swap 2 integers
         * @param int a
         * @param int b
         */
        void swap(int *a,int *b);

        /**
         * \brief helper function used to swap 2 floats
         * @param float a
         * @param float b
         */
        void swap(float *a, float *b);


};

#endif //ALGORITHMS_SORTING_H
