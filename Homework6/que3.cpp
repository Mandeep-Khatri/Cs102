#include <iostream>
using namespace std;
int main()
{
    int days;
    int year;
bool Leapyear;
cout<<"Enter the years: ";
cin>>year;

if (year % 4 == 0 && year % 100 != 0)
 {
     Leapyear = true;
  days = 366;
}
 else if (year % 400==0)
 {
 Leapyear = true;
 days = 366;
 }
 else
 {
 Leapyear = false;
 days = 365;
 }
 if (Leapyear)
 cout<<year<<" -Its a leap Year. "<<endl;
 else
 cout<<year<<" Its a not leap Year. "<<endl;
 cout<< "Number of days: "<<days<<endl;
 
 return 0;
}
 
 