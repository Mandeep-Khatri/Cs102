#include <iostream>
#include <string>
using namespace std;

int main()
{
    string monthName;
    string weekDay;
    int month;
    int day;
    int year;
    int weekday;

    cout << "Enter month name: ";
    cin >> monthName;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter year: ";
    cin >> year;

    if (monthName == "January")
        month = 1;
    else if (monthName == "February")
        month = 2;
    else if (monthName == "March")
        month = 3;
    else if (monthName == "April")
        month = 4;
    else if (monthName == "May")
        month = 5;
    else if (monthName == "June")
        month = 6;
    else if (monthName == "July")
        month = 7;
    else if (monthName == "August")
        month = 8;
    else if (monthName == "September")
        month = 9;
    else if (monthName == "October")
        month = 10;
    else if (monthName == "November")
        month = 11;
    else if (monthName == "December")
        month = 12;

    weekday = (day + (26 * (month + 1)) / 10 + year + year / 4 - year / 100 + year / 400) % 7;

    if (weekday == 0)
        weekDay = "Saturday";
    else if (weekday == 1)
        weekDay = "Sunday";
    else if (weekday == 2)
        weekDay = "Monday";
    else if (weekday == 3)
        weekDay = "Tuesday";
    else if (weekday == 4)
        weekDay = "Wednesday";
    else if (weekday == 5)
        weekDay = "Thursday";
    else if (weekday == 6)
        weekDay = "Friday";

    cout << "The day of the week is: " << weekDay << endl;
    return 0;
}
