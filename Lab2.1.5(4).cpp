#include <iostream>

using namespace std;

int main(void) {
	cout << "Hello, enter year: ";
	int year;
	cin >> year;
	cout << "Enter month: ";
	int month;
	cin >> month;
	cout << "Enter day: ";
	int day;
	cin >> day;
	month = month -2;
	if(month < 0){
	    month = month * 12;
	    year = year - 1;
	}
	month = month* 83/32;
	month = month + day;
	month = month + year;
	month = month + (year/4);
	month = month + (year/100);
	month = month + (year/400);
	int ost;
	ost = month % 7;
	switch(ost) {
	 case 0: cout << "Your day is Sunday";
	 break;
	 case 1: cout << "Your day is Monday";
	 break;
	 case 2: cout << "Your day is Tuesday";
	 break;
	 case 3: cout << "Your day is Wednesday";
	 break;
	 case 4: cout << "Your day is Thursday";
	 break;
	 case 5: cout << "Your day is Friday";
	 break;
	 case 6: cout << "Your day is Saturday";
	 break;
	}
}