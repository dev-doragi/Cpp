//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//
//bool file_exists(const char* filename) {
//	FILE* fp = fopen(filename, "r");
//
//	if (fp != nullptr) fclose(fp);
//
//	return fp != nullptr;
//}
//
//int main() {
//	FILE* infile = fopen("in.txt", "r");
//
//	while (true) {
//		char line[256];
//		fscanf(infile, "%255[^\n]s", &line);
//		fgetc(infile);
//
//		printf("%s\n", line);
//
//		if (feof(infile) == 1) break;
//	}
//
//	fclose(infile);
//
//	return 0;
//}