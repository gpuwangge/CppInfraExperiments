#include "../include/infra.h"
#include "../include/blockA.h"
#include "../include/blockB.h"


int main(){
	CInfra infra;
	infra.print();
	infra.funcA();
	infra.funcB();
	infra.funcC();

	CBlockA blockA;
	blockA.print();

	CBlockB blockB;
	blockB.print();
    return 0;
}