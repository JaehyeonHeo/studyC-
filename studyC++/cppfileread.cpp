#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	ifstream f; 
	char str[128];
	int i; 

	f.open("c:\\temp\\cpptest.txt"); // --> 절대 경로
//	f.open("cpptest.txt");              --> 상대 경로 
	if (f.is_open()) {
		f >> str >> i;
		cout << str << i << endl; 
		f.close(); 
	}
	else {
		cout << "파일 열기 실패" << endl; 
	}
}