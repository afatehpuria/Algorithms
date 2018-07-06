//
// Created by Aman Fatehpuria on 7/05/18.
//
#ifndef ALGORITHMS_UTILS_H
#define ALGORITHMS_UTILS_H

#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <stdlib.h>

using namespace std;

typedef vector<int> VInt;
typedef unsigned int uint;

class utils {
public:
	utils(void);
	~utils(void);
	VInt IntToVector(int i);
	void PrintVect(VInt v);



private:

    utils(const utils& rhs);
    utils& operator=(const utils& rhs);
};

#endif //ALGORITHMS_UTILS_H