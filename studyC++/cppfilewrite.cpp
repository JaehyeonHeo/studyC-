#include <iostream>
#include <fstream>
using namespace std; 
/*
	파일 입출력 
*/
int main()
{
	ofstream f;

	f.open("c:\\temp\\cpptest.txt"); 
	if (f.is_open()) {
		f << "String" << 1234 << endl; 
		f.close(); 

		cout << "파일 생성 완료" << endl; 
	}
	else {
		cout << "파일 열기 실패" << endl;
	}

}