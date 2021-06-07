#include <iostream>
using namespace std; 

class CTest {
private:
	int num;
public:
	CTest(int anum) {
		num = anum;
		cout << num << " CTest constructor" << endl; 
	};
	virtual ~CTest() {
		cout << num << " CTest desconstructor" << endl;
	}
	virtual void func() {
		cout << "CTest function()" << endl; 
	}
	
};

class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int anum, int asubN) : CTest(anum){
		subN = asubN;
		cout << subN << " CTestSub constructor" << endl;
	}
	~CTestSub() {
		cout << subN << " CTestSub desconstructor" << endl; 
	}
	void func() {
		cout << "CTestSub function()" << endl; 
	}
};

int main()
{
	CTest b(10);
	b.func(); 
	CTestSub d(10, 20); 
	d.func();

	CTest* pb = new CTestSub(30, 33); // �߻� �ڷ������� �ڽİ�ü�� ����Ű�� �Ѵ�
	pb->func();

	delete pb; 

	return 0; 
}