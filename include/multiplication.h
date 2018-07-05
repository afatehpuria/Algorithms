//
// Created by Aman Fatehpuria on 7/03/18.
//

#ifndef ALGORITHMS_MULTIPLICATION_H
#define ALGORITHMS_MULTIPLICATION_H

#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

typedef vector<int> VInt;

class multiplication {
public:

    VInt xArr;
    VInt yArr;

    multiplication(const VInt& iArr, const VInt& jArr);
    
    ~multiplication(void);

    // std::vector<int> RecursionMult(void);

private:

    multiplication(const multiplication& rhs);
    multiplication& operator=(const multiplication& rhs);

};

#endif //ALGORITHMS_MULTIPLICATION_H
