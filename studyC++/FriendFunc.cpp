#include <stdio.h>

class Date;  // Date라는 클래스가 Time보다 밑에 있으므로 원형을 위에 적어줘야 함
class Time {
	friend void OutToday(Date&, Time&); 
private:
	int hour, min, sec; 
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
};

class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
};

void OutToday(Date& d, Time& t) {
	printf("오늘은 %d년 %d월 %d일이며\n지금 시간은 %d:%d:%d 입니다.\n",
		d.year, d.month, d.day, t.hour, t.min, t.sec); 
}

int main() 
{
	Date d(2021, 06, 01); 
	Time t(15, 23, 56); 
	OutToday(d, t); 

	return 0; 
}