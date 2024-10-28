#include <iostream>
using namespace std;

int main() 
{
double homework;
double tests;
double midterms;
double finals;
double labs;
double attendance;
double Overallscore;
char Grade;

cout<<"Enter the mark of Homework: ";
cin>> homework;
cout<<"Enter the mark of Test: ";
cin>> tests;
cout<<"Enter the mark of Midterms: ";
cin>> midterms;
cout<<"Enter the mark of Attendence: ";
cin>> attendance;
cout<<"Enter the mark of Labs: ";
cin>> labs;
cout<<"Enter the mark of Finals: ";
cin>> finals;

Overallscore = 0.20 * homework + 0.10 * tests + 0.20 * midterms + 0.10* labs + 0.3 * finals + 0.10 * attendance;

if (Overallscore>=90)
{
Grade = 'A';
}
else if (Overallscore>=80)
{
Grade = 'B';
}
else if (Overallscore>=70)
{
    Grade = 'C';
}
else if (Overallscore>=60)
{
    Grade = 'D';
}
else
{
    Grade = 'F';
}

cout << "Your Overall Score is: " << Overallscore << endl;
cout << "Your Grade is: " << Grade << endl;

return 0;
}