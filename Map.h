#include <iostream>
#include <cstdlib>

#ifndef MAP_H
#define MAP_H
using namespace std;
class Mymap
{
	int size; //#documents
	int buffersize; //the lebgth of the biggest document
	char** documents; //each document
	int* lengths; //each document length
	public:
		Mymap(int size, int buffersize);
		~Mymap();
		int insert(char* line, int i);
		const int getsize() { return size; }
		const int getbuffersize() { return buffersize; }
};
#endif