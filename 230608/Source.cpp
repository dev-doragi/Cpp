//#include <cstdio>
//#include <string>
//
//// template 클래스를 이용한 가변 배열 만들기
//template <typename T>
//class MyArray {
//private:
//	T* arrayItem; // 배열 포인터
//	int cnt = 0;
//	int capacity = 8;
//	
//public:
//	MyArray() {
//		arrayItem = new T[capacity];
//	}
//
//	virtual ~MyArray() {
//		delete[] arrayItem; // 배열 delete 할땐 [] 붙일것!
//	}
//
//	void putValue(const T& value) {
//		if (capacity <= cnt) {
//			printf("배열의 capacity가 두배로 늘어남.\n");
//			T* newarray = new T[capacity * 2];
//			capacity *= 2;
//			for (int i = 0; i < cnt; i++) {
//				newarray[i] = arrayItem[i];
//			}
//			delete[] arrayItem;
//			arrayItem = newarray;
//		}
//		arrayItem[cnt++] = value;
//	}
//
//	bool contains(T value) {
//		for (int i = 0; i < cnt; i++) {
//			if (arrayItem[i] == value)
//				return true;
//			else
//				continue;
//		}
//		return false;
//	}
//
//	void replace(int index, T value) {
//		if (index < cnt) {
//			arrayItem[index] = value;
//		}
//	}
//
//	void erase(int index) {
//		for (int i = index; i < cnt - 1; i++) {
//			arrayItem[i] = arrayItem[i + 1];
//		}
//		cnt--;
//	}
//
//	int getCnt() {
//		return cnt;
//	}
//
//	T getValue(int index) {
//		return arrayItem[index];
//	}
//};
//
//int main()
//{
//	MyArray<std::string> m = MyArray<std::string>();
//
//	m.putValue("apple");
//	m.putValue("banana");
//	m.putValue("clkj");
//	m.putValue("eeeeeeeeeee");
//	m.putValue("dsdf");
//	m.putValue("xxx");
//	m.putValue("ddee");
//	m.putValue("wr");
//	m.putValue("xcv");
//	
//	for (int i = 0; i < m.getCnt(); i++) {
//		printf("%s ", m.getValue(i).c_str());
//	}
//
//	putchar('\n');
//
//	if (m.contains("apple")) {
//		printf("값이 있다!\n");
//	}
//
//	m.replace(0, "poison apple");
//
//	for (int i = 0; i < m.getCnt(); i++) {
//		printf("%s ", m.getValue(i).c_str());
//	}
//
//	putchar('\n');
//
//	m.erase(1);
//
//	for (int i = 0; i < m.getCnt(); i++) {
//		printf("%s ", m.getValue(i).c_str());
//	}
//
//	return 0;
//}