//
// Created by Aman Fatehpuria on 6/20/18.
//

#include "../include/sorting.h"


sorting::sorting(int* pArr, uint nLen)
    : iarr(0x0),
      len(0x0)
{
    if ((pArr != nullptr) && (nLen > 0x0)) {
	len = nLen;
	iarr = new int[len];
	if (iarr != nullptr) {
	    for (uint i = 0x0; i < len; i++) {
		iarr[i] = pArr[i];
	    }
	}
    }
}

sorting::~sorting(void)
{
    if (iarr != nullptr) {
	delete [] iarr;
	iarr = nullptr;
    }
}


// sorting::sorting(float array[]){
//     farr = *array;
// }

void sorting::swap(uint a, uint b) {
    int temp =  iarr[a];
    iarr[a] = iarr[b];
    iarr[b] = temp;
}


// void sorting::swap(float *a, float *b) {
//     float temp =  *a;
//     *a = *b;
//     *b = temp;
// }

void sorting::PrintArray(void) 
{
    for (uint i=0; i < len; i++) {
        printf("%d ", iarr[i]);
    }
    printf("\n");
}

// void sorting::PrintArray(float arr[], int len_arr) {
//     int i;
//     for (i=0; i < len_arr; i++)
//         printf("%f ", arr[i]);
//     printf("n");
// }

void sorting::BubbleSort(void)
{
    int i,j;
    bool WasSwapped;

    for (i=0; i<len; i++){
        WasSwapped = false;
        for (j=0; j<len-i-1; j++){
            if(iarr[j] > iarr[j+1]){
                swap(j,j+1);
                WasSwapped=true;
            }
        }
        if(WasSwapped== false){
            break;
        }
    }
}
