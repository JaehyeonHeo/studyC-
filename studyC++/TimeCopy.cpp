#include <stdio.h>

class Time
{
private:
	int hour, min, sec; 

public:
	Time(int h, int m, int s) {
		hour = h; 
		min = m; 
		sec = s; 
	}

	void OutTime() {
		printf("현 시간은 %d:%d:%d 입니다.\n", hour, min, sec); 
	}
};

int main()
{
	Time now(12, 34, 56); 
	Time then = now; 
	// == Time then(now); 

	then.OutTime(); 
}