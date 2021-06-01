#include <stdio.h>

/*
  friend 함수 : 한쪽만 친구다. Date클래스 에서는 Time을 쓸 수 있지만 
				Time클래스에서는 Date클래스의 멤버를 사용할 수 없다.
*/
class Date;

class Time {
	friend class Date;
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
};

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }	
	void OutToday(Time& t) {
		printf("오늘은 %d년 %d월 %d일 이며\n지금 시간은 %d:%d:%d입니다.\n",
			year, month, day, t.hour, t.min, t.sec);
	}
};

int main()
{
	Date d(2021, 06, 01); 
	Time t(12, 34, 56); 
	d.OutToday(t); 

	return 0;
}