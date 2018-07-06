//
// Created by Aman Fatehpuria on 7/05/18.
//

#include "../include/utils.h"

utils::utils(void){}
utils::~utils(void){}

VInt utils::IntToVector(int x){
	VInt v;

	if (x==0){
		v.push_back(0);
	}
	while(x>0){
		v.push_back(x%10);
		x /=10;
	}
	reverse(v.begin(),v.end());
	// div_t q = div(x, 10);

 //    if (q.quot)
 //        IntToVector(q.quot);
	// // cout<<q.rem<<" ";
 //    v.push_back(q.rem);
    
    return v;
}

void utils::PrintVect(VInt v){
	uint len = v.size();
	for(int i =0; i<v.size(); i++){
		cout << v[i]<<" ";
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