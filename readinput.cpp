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
    int n = 0;
	int length;
	while (fgets(line,1000, file)!=NULL)
	{
        if(*maxlength<strlen(&line[n]))
			*maxlength= strlen(&line[n]);
        n++;
	}
}

