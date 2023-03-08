#include "readinput.h"
#include <cstring>

using namespace std;
int read_sizes(int *linecounter, int *maxlength, char* docfile)
{
	FILE *file = fopen(docfile, "r");
	if (file == NULL)
	{
		cout << "Error opening file" << endl;
		return -1;
	}
	char line[1000];
	
	while (fgets(line,1000, file)!=NULL)
	{
		printf("%s", line);
	}
}