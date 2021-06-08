#include <iostream>
using namespace std; 

template <typename T> // 일반화
T Add(T a, T b) {
	return a + b; 
}

template <> // 특수화
const char* Add(const char* lstr, const char* rstr) {
	int llen = strlen(lstr); 
	int rlen = strlen(rstr); 
	int len = llen + rlen + 1; 
	char* str = new char[len];
	strcpy_s(str, llen + 1, lstr);
	strcat_s(str, len, rstr);

	return str; 
}

int main()
{
	// 템플릿 일반화
	int res = Add<int>(3, 4);
	cout << res << endl; 

	// 템플릿 특수화
	const char* sres = Add<const char*>("Hello", "Iot");
	cout << sres << endl;

	return 0; 
}