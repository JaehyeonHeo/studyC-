#include <iostream>
#include <string>	
using namespace std; 

int main()
{
	string name, addr; 

	cout << "�̸��� �Է��ϼ��� : " << endl; 
	cin >> name; 
	cout << "�Է��� �̸��� " << name << "�Դϴ�" << endl; 
	cin.ignore(); 
	cout << "�ּҸ� �Է��ϼ��� : "; 
	getline(cin, addr); 
	cout << "�Է��� �ּҴ� " << addr << " �Դϴ�" << endl; 
}