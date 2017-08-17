#pragma once
//header class for Time
class Time
{
public:
	//Prototype
	Time();								//default function			
	Time(int, int);						//mutator function
	void setHours(int);					//setHours function
	void setMinutes(int);				//setMinutes function
	int getHours();						//getHours function
	int getMinutes();					//getMinutes function
	void print();						//prints function
	int minSinceMidnight() const;		//function for minutes since midnight
	void advance();						//advance function 
	~Time();							//Desturtor
private:
	int hour;							//integer value of hour
	int minute;							//integer value of minute
};

