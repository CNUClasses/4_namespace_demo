
#include <iostream>
using namespace std;

#include "ms1.h"
#include "ms2.h"

int main() {
	//first have none of the myfuncs in a namespace
	//next have just 1 of the myFuncs in a namespace and see what happens
	//finally put both in a namespace, dont forget to modify the code below
	cout<<"ms1's myFunc returns "<<ms1::myFunc()<<endl;
	cout<<"ms2's myFunc returns "<<ms2::myFunc()<<endl;
	return 0;
}
