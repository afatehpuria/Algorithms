//
// Created by Aman Fatehpuria on 7/03/18.
//

#include "../include/multiplication.h"
/**
* This class only takes in vectors of equal length
*
**/
multiplication::multiplication(const VInt& iArr, const VInt& jArr)
{
    xArr = iArr;
    yArr = jArr;
}

multiplication::~multiplication(void)
{
}

/*
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
*/
