#pragma once
class Time
{
public:
	Time();
	Time(int, int);
	void setHours(int);
	void setMinutes(int);
	int getHours();
	int getMinutes();
	void print();
	int minSinceMidnight() const;
	void advance();
	~Time();
private:
	int hour;
	int minute;
};

