//
// Created by Aman Fatehpuria on 7/05/18.
//

#include "../include/utils.h"

utils::utils(void){}
utils::~utils(void){}

VInt utils::IntToVector(int i){
	VInt v;
	div_t q = div(x, 10);

    if (q.quot){
        IntToVector(q.quot);
    }
    v.push_back();
}

void utils::PrintVect(VInt v){
	len = v.size();
	for(uint i =0; i<len; i++){
		cout << v[i] << " ";
	}
}

int utils::VectorToInt(VInt v)
{
    int decimal = 1;
    int total = 0;
    for (auto& it : v)
    {
        total += it * decimal;
        decimal *= 10;
    }
    return total;
}