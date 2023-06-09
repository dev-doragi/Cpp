//#include <cstdio>
//#include <map>
//#include <string>
//#include <algorithm>
//
//int main()
//{
//	std::map<std::string, std::string> capitals;
//
//	capitals["Korea"] = "seoul";
//	capitals["USA"] = "washington";
//	capitals["China"] = "beijing";
//
//	printf("%s\n", capitals["Korea"].c_str());
//
//	// count 멤버함수, 특정 key에 매칭되는 value의 개수를 리턴.
//	if (capitals.count("Korea") == 1) {
//		printf("Korea가 존재함.\n");
//	}
//	else {
//		printf("Korea가 존재하지않음.\n");
//	}
//
//	// erase 멤버함수
//	capitals.erase("China");
//	if (capitals.count("China") == 1) {
//		printf("China가 존재함.\n");
//	}
//	else {
//		printf("China가 존재하지않음.\n");
//	}
//
//	for (auto it = capitals.begin(); it != capitals.end(); it++) {
//		printf("capitals[%s] : %s\n", it->first.c_str(), it->second.c_str());
//	}
//
//	return 0;
//}