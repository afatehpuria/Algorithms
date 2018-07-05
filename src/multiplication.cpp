//
// Created by Aman Fatehpuria on 7/03/18.
//

#include "../include/multiplication.h"
/**
* This class only takes in vectors of equal length
*
**/
multiplication::multiplication(std::vector<int> iArr, std::vector<int> jArr)
	: xArr(0x0)
	  yArr(0x0)

{	
	if (!iArr.empty()) {
		len = iArr.size()
		xArr = new std::vector<int> [len];
		if (xArr != nullptr) {
	    	for (uint i = 0x0; i < len; i++) {
			xArr[i] = iArr[i];
	    }
	}
    }

    if (!jArr.empty()) {
		len = jArr.size()
		yArr = new std::vector<int> [len];
		if (yArr != nullptr) {
	    	for (uint i = 0x0; i < len; i++) {
			yArr[i] = jArr[i];
	    }
	}
    }
}

multiplication::~multiplication(void)
{
    if (xArr != nullptr) {
	delete [] xArr;
	xArr = nullptr;
    }
    if (yArr != nullptr) {
	delete [] yArr;
	yArr = nullptr;
    }
}


std::vector<int> RecursionMult(std::vector<int> arr1, std::vector<int> arr2){
	std::vector<int> sol;
	std::vector<int> temp1;
	std::vector<int> temp2;
	uint len1 = arr1.size();
	uint len2 = arr2.size();

	if (len1=1 && len2=1){
		sol.push_back(xArr[0]*yArr[0]);
	}
	else {
		for(uint i = 0x0; i<len1/2; i++){
			temp1.push_back(arr1[i]);
			temp2.push_back(arr2[len2-i]);
		}
		sol = RecursionMult(temp1, temp2);
	}
	return sol
}

