//
// Created by Aman Fatehpuria on 6/20/18.
//

#include "../include/sorting.h"
<<<<<<< HEAD

sorting::sorting(int array[]) {
    iarr = *array;
}

sorting::sorting(float array[]){
    farr = *array;
}

void sorting::swap(int *a, int *b) {
    int temp =  *a;
    *a = *b;
    *b = temp;
}


void sorting::swap(float *a, float *b) {
    float temp =  *a;
    *a = *b;
    *b = temp;
}

void sorting::PrintArray(int arr[], int len_arr) {
    int i;
    for (i=0; i < len_arr; i++)
        printf("%d ", arr[i]);
    printf("n");
}

void sorting::PrintArray(float arr[], int len_arr) {
    int i;
    for (i=0; i < len_arr; i++)
        printf("%f ", arr[i]);
    printf("n");
}

void sorting::BubbleSort(int arr[], int len_arr) {
    int i,j;
    bool WasSwapped;

    for (i=0; i<len_arr-1; i++){
        WasSwapped = false;
        for (j=0; j<len_arr-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                WasSwapped=true;
            }
        }
        if(WasSwapped== false){
            break;
        }
    }
}
=======
>>>>>>> f16434ccb6318cd3abee2e64b8ff955a21e1e412
