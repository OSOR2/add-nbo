#include <iostream>
#include <stdint.h>
#include <netinet/in.h>
using namespace std;

uint32_t read_nbfile(char* path)
{
	uint32_t val=0;
	FILE* file=fopen(path,"rb");
	if(!file)
	{
		cerr<<"[Error] File open error"<<endl;
		exit(0);
	}
	fread(&val,4,1,file);
	fclose(file);
	val=htonl(val);
	return val;
}