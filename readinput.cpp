#include "readinput.h"
#include <cstring>
#include <string>

using namespace std;
int read_sizes(int *linecounter, int *maxlength, char* docfile)
{
	FILE *file = fopen(docfile, "r");
	if (file == NULL)
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	char *line = NULL;
	size_t falsebuffer = 0;
	char* currlength;
	
	while (-1 != (currlength = fgets(line,falsebuffer, file)))
	{

	}
}