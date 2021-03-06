//
// Created by Aman Fatehpuria on 7/03/18.
//

#include "../include/multiplication.h"
#include "../include/utils.h"
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


VInt multiplication::RecursionMult(VInt arr1, VInt arr2){
	VInt a;
	VInt b;
	VInt c;
	VInt d;
	VInt temp1;
	VInt temp2;
	VInt temp3;
	VInt temp4;
	VInt sol;
	utils u;

	uint len1 = arr1.size();
	uint len2 = arr2.size();

	if (len1=1){
		sol.push_back(xArr[0]*yArr[0]);
	}
	else {
		for(uint i = 0x0; i<len1/2; i++){
			a.push_back(arr1[i]);
			b.push_back(arr1[len1/2+i]);
			c.push_back(arr2[i]);
			d.push_back(arr2[len2/2+i]);
		}
		temp1 = RecursionMult(a, c);
		temp2 = RecursionMult(a, d); 
		temp3 = RecursionMult(b, c);
		temp4 = RecursionMult(b, d);
		sol = RecursionMult(temp1, temp2);
		int int1 = u.VectorToInt(temp1);
		int int2 = u.VectorToInt(temp2);
		int int3 = u.VectorToInt(temp3);
		int int4 = u.VectorToInt(temp4);
		int int5 = int1*pow(10, len1);
		int int6 = (int2+int3)*pow(10, len1/2);
		int solInt = int5 + int6 + int4;
		cout<<int5;
		sol = u.IntToVector(solInt);

	}
	return sol;
}
