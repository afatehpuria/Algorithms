//
// Created by Aman Fatehpuria on 7/03/18.
//

#ifndef ALGORITHMS_MULTIPLICATION _H
#define ALGORITHMS_MULTIPLICATION_H

#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

typedef unsigned int uint;

class multiplication {
public:

	std::vector<int> xArr;
	std::vector<int> yArr;

	multiplication(std::vector<int> iArr, std::vector<int> jArr);

	~multiplication(void);

	std::vector<int> RecursionMult(void);







private:

    multiplication(const multiplication& rhs);
    multiplication& operator=(const multiplication& rhs);

};

#endif //ALGORITHMS_MULTIPLICATION_H
