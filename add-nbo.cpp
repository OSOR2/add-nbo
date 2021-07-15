#include <iostream>
#include <stdint.h>
#include "rfnbo.h"
using namespace std;

int main(int argc, char** argv)
{	
	uint32_t val1=read_nbfile(argv[1]);
	uint32_t val2=read_nbfile(argv[2]);
	uint32_t result= val1+val2;
	cout<< val1 <<"(0x"<< hex << val1 <<") + "<< dec;
	cout<< val2 <<"(0x"<< hex << val2 <<") = "<< dec;
	cout<< result <<"(0x"<< hex << result <<")"<<endl;
}
