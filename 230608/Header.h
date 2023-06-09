#ifndef __HEADER_H__
#define __HEADER_H__

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <map>
#include <string>
using namespace std;

int getInteger(const char* prompt);

string getString(const char* prompt);

class Dictionary {
private:
	map<string, string> words;
public:
	void insertWord(const string& word, const string& meaning);
	bool exists(const string& word);
	string getMean(const string& word);
};

#endif
