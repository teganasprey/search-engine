// search_engine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "searchengine.h"
#include <cstring>

using namespace std; 
int main(int argc, char **argv)
{
    if (argc != 5 || strcmp(argv[1], "-d") || strcmp(argv[3], "-k"))
    {
        cout << "wrong arguments" << endl;
        return -1;
    }
    cout << "Please wait..." << endl;
    int linecounter;
    int maxlength = -1;
    int k = atoi(argv[4]);
    if (read_sizes(&linecounter, &maxlength, argv[2]) == -1)
        return -1;
    Mymap* mymap = new Mymap(linecounter, maxlength);
    Trienode* trie = new Trienode();
    if (read_input(mymap, trie, argv[2]) == -1)
    {
        delete(mymap);
        return -1;
    }
    
    cout << "Initialisation finished" << endl;
    //cout << "Linecounter: " << linecounter << endl << "Maxlength: " << maxlength << endl;
    for (int i = 0; i < mymap->getsize(); i++)
    {
        mymap->print(i);
    }
    delete(mymap);
    return 1;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//watch 2:45