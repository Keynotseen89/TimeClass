/*
Program:	140-lab7 TimeClass
Author :	Quinatzin Sintora
Class  :	CSCI 140 MW
Date   :	04/18/2017
Desciption:	
			Using a class called Time to Hours and minute 
			hours that range from 0 - 23 and minutes 0 - 59

Exception(s): N/A
*/
#include "Time.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Time t;										//Create new object of Time class
	int hours, minutes;							
	string yesNo;								//String used for yes and no 

	//prompt user for Hours and Minutes
	cout << "Author: Quinatzin Sintora." << endl;
	cout << "Enter hours and minutes" << endl;

	//Run while loop untill yesNo input is n
	while (yesNo != "n")
	{
		cin >> hours >> minutes;				//input hours and minutes
		t.setHours(hours);						//set Object of t to hours
		t.setMinutes(minutes);					//set Object of t to minuts
		t.print();								//print Object of T 

		//Display Minutes Since Midnight
		cout << "\nMinute since midnight. " << t.minSinceMidnight() << endl;
		
		//Display advance of minutes
		cout << "Clock advanced by one minute." << endl;
		t.advance();

		cout << "Different Times. y/n." << endl;
		cin >> yesNo;
		cout << "Enter hours and minutes" << endl;
	}
	system("Pause");
	return 0;

}//end of main code