#define _CRT_SECURE_NO_WARNINGS	
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

int getRandeomNumber(int seed) {
	srand(seed);
	return rand();
}