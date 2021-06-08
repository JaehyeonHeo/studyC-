#include <iostream>
using namespace std; 

template <typename T> // �Ϲ�ȭ
T Add(T a, T b) {
	return a + b; 
}

template <> // Ư��ȭ
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
	// ���ø� �Ϲ�ȭ
	int res = Add<int>(3, 4);
	cout << res << endl; 

	// ���ø� Ư��ȭ
	const char* sres = Add<const char*>("Hello", "Iot");
	cout << sres << endl;

	return 0; 
}