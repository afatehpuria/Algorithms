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