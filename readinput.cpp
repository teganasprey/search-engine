#include "readinput.h"
#include <cstring>
#include <array>
#include "Map.h"

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
	*linecounter = 0;
	while (fgets(line,1000, file)!=NULL)
	{
        if(*maxlength<(int)strlen(line))
			*maxlength= (int)strlen(line);
		(*linecounter)++;
	}
	if (*linecounter == 0 || *maxlength < 3)
	{
		cout << "Document does not meet requirements" << endl;
		return -1;
	}
	return 1;
}

int read_input(Mymap* mymap, Trienode *trie, char* docfile)
{
	FILE* file = fopen(docfile, "r");
	char line[1000];
	int falsebuffer = 1000;
	int currlength;
	char* temp = (char*)malloc(mymap->getbuffersize() * sizeof(char));

	for (int i = 0; i < mymap->getsize(); i++)
	{
		fgets(line, falsebuffer, file);
		if (mymap -> insert(line, i) == -1)
		{
			cout << "Document does not meet requirements" << endl;
			fclose(file);
			free(temp);
			return -1;
		}
	}
	fclose(file);
	free(temp);
}


