#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = { 10, 20, 30, 40, 50 };

	// �迭 ���·� ���� ���
	for (auto i = 0; i < v.size(); i++) {
		cout << v[i] << '	';   
	}
	// iterator ����ؼ� ���
	for (auto iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << '	'; 
	}


	return 0; 
}