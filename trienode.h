#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef TRIENODE_H
#define TRIENODE_H

using namespace std;
class Trienode
{
	Trienode* sibling;
	Trienode* child;
	//listnode* list;
	char value;
	public:
		Trienode();
		~Trienode();

};

#endif 
