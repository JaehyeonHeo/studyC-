#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v; 
	vector<int> v1 = { 1, 2, 3, 4, 5 }; 
	vector<int> v2[5];

	v1.push_back(10);
	vector<int> ::iterator iter = v.begin();
	iter = v.insert(iter, 2);

	v1.pop_back(); 
	v1.erase(v.begin() + 10);
	v1.clear();

	return 0; 
}

