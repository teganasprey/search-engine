#include "trienode.h"

Trienode::Trienode() :value(-1)
{
	sibling = NULL;
	child = NULL;
	//list=NULL
}

Trienode::~Trienode()
{
	//if (list != NULL)
	//	delete(list);
	if (child != NULL)
		delete(child);
	if (sibling != NULL)
		delete(sibling);
}