#include <iostream>
#include <cstdlib>

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
};
