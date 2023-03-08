#include "Map.h"
using namespace std;
Mymap::Mymap(int size, int buffersize) :size(size), buffersize(buffersize)
{
	documents = (char**)malloc(size * sizeof(char*));
	lengths = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
		documents[i] = (char*)malloc(buffersize * sizeof(char));
}
Mymap::~Mymap(
	{

	}
