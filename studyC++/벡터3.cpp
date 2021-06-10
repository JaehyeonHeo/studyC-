#include <iostream>
#include <vector>
#include <algorithm>  // sort 함수 사용
using namespace std;

int main()
{
	vector<int> arr; 
	arr.push_back(7);
	arr.push_back(3);
	arr.push_back(5); 
	arr.push_back(2); 
	arr.push_back(6);

	sort(arr.begin(), arr.end());           // 정렬하는 함수를 기본 제공 
	for (auto i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}

	return 0;
}