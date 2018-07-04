//
// Created by Aman Fatehpuria on 7/03/18.
//

#include "../include/multiplication.h"

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

