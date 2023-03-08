CC=g++
default: searchengine clean
searchengine: searchengine.o
	$(CC) - o searchengine searchengine.o
searchengine.o: searchengine.cpp searchengine.h
	$(CC) -c searchengine.cpp