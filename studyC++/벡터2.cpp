#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = { 10, 20, 30, 40, 50 };

	// 배열 형태로 벡터 출력
	for (auto i = 0; i < v.size(); i++) {
		cout << v[i] << '	';   
	}
	// iterator 사용해서 출력
	for (auto iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << '	'; 
	}


	return 0; 
}