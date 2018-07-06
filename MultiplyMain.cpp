#include "include/multiplication.h"
#include "include/utils.h"

int main() {
    ///////////////////////////////////////////////////////////////////////////
    uint iiInt = 5678;
    uint jjInt = 1234;
    utils u;
    VInt iiArr = u.IntToVector(iiInt);
    VInt jjArr = u.IntToVector(jjInt);

    multiplication m(iiArr, jjArr); 

    VInt soln = m.RecursionMult(iiArr, jjArr);

    // u.PrintVect(soln);



    return 0;
    ///////////////////////////////////////////////////////////////////////////
}
