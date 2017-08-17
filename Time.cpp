#include "Time.h"

#include <iostream>
#include <iomanip>
using namespace std;

Time::Time()
{

}
Time::Time(int h = 0, int m = 0)
{
	//if hours are over 23 then
	//set hours to 0 again else set hours to h
	if(h > 23)
	{
		hour = 0;
	}
	else
	{
		hour = h;
	}
	//if minutes are over 59 then set minute back to 
	//0 if not then set minute to m
	if (m > 59)
	{
		minute = 0;
	}
	else
	{
		minute = m;
	}
}

void Time::setHours(int h)
{
	//if hours is over 23 set hours to 0
	//else set hour to h
	if (h > 23)
	{
		hour = 0;
	}
	else
	{
		hour = h;
	}
}

void Time::setMinutes(int m)
{
	//if minute is over 59 set minute to 0
	//else set minute to m
	if (m > 59)
	{
		minute = 0;
	}
	else
	{
		minute = m;
	}
}
/**
	@return hours
*/
int Time::getHours()
{
	return hour;
}
/*
	@return minute
*/
int Time::getMinutes()
{
	return minute;
}

/*
	print hours and minutes
*/
void Time::print()
{
	
	if (hour < 12)
	{
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << "AM" << endl;
	}
	else 
	{
		cout << setw(2) << setfill('0') << (hour - 12) << ":" << setw(2) << setfill('0') << minute << "PM" << endl;
	}

}
/*
	constant function 
	@returns totalMin before/since midNight
*/
int Time::minSinceMidnight() const
{
	int minVale = 60;		//set minutes to 60
	int totalMin;			//leave empty
	
	totalMin = (hour * minVale) + minute;
	
	return totalMin;
}

/*
	advance minute by one aswell as hours
*/
void Time::advance()
{	
	
	minute += 1;

	if (minute > 59)
	{
		hour += 1;
		minute = 0;
	}
	else if (hour > 23)
	{
		hour = 0;
	}

	if (hour < 12)
	{
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << "AM" << endl;
	}
	else
	{
		cout << setw(2) << setfill('0') << (hour - 12) << ":" << setw(2) << setfill('0') << minute << "PM" << endl;
	}
	
	
}

Time::~Time()
{
}

