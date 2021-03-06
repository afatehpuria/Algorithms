//
// Created by Aman Fatehpuria on 6/20/18.
//

#include "../include/sorting.h"

using namespace std;

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

void sorting::InsertionSort(void)
{
    int HoleP, ValToInsert;

    for(int i =1; i < len; i++){
        //Select Val to be inserted and set its position as the 
        //position of the hole
        HoleP = i;
        ValToInsert = iarr[i];

        //Move the Val to its correct postion in sorted list
        while( HoleP > 0 && iarr[HoleP -1]> ValToInsert){
            swap(HoleP-1,HoleP);
            HoleP-=1;
        }
    }
}

void sorting::SelectionSort(void)
{
    int IndexOfMin;
    for(int i =0; i<(len-1); i++){
        IndexOfMin = i;
        for(int j = i+1; j<len; j++){
            if(iarr[j] < iarr[IndexOfMin]){
                IndexOfMin = j;
            }
        }
        if(IndexOfMin!=i){
            swap(IndexOfMin,i);
        }
    }
}

std::vector<int> sorting::MergeSort(std::vector<int> arr){
    int LengthArr = arr.size();
    std::vector<int> arr1;
    std::vector<int> arr2;

    if(LengthArr==1){
        return arr;
    }
    else{
        uint LengthArr1 = (LengthArr/2);
        for(int i=0; i<=LengthArr1-1; i++){
            arr1.push_back(arr[i]);
        }
        for(int j=LengthArr1; j<=LengthArr-1; j++){
            arr2.push_back(arr[j]);
        }
        return merge(MergeSort(arr1), MergeSort(arr2));
    }
}



std::vector<int> sorting::merge(std::vector<int> v1, std::vector<int> v2){
    std::vector<int> v;
    while(v1.size()!=0 && v2.size()!=0){
        if(v1.front() < v2.front()) {
            v.push_back( v1.front() );
            v1.erase(v1.begin());
        }
        else{
            v.push_back(v2.front());
            v2.erase(v2.begin());
        }
    }

    while(v1.size()!=0){
        v.push_back(v1.front());
        v1.erase(v1.begin());
    }

    while(v2.size()!=0){
        v.push_back(v2.front());
        v2.erase(v2.begin());
    }

    vector<int>::iterator iter;
    uint counter = 0x0;
    for (iter = v.begin(); iter != v.end(); iter++) {
      iarr[counter] = *iter;
      counter++;
    }

    //    for (counter = 0x0; counter < len; counter++) {
    //  iarr[counter] = v[counter];
    // }
    // iarr = &v[0];
    return v;
}

