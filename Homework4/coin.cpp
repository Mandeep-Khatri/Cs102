#include <iostream>
using namespace std;

int main() 
{
double dollar;
int Cents;
int numberofquarters;
int numberofdimes;
int numberofnickels; 
int numberofpennies;
int Totalnoofcoins;


cout<<"Enter the dollars: $";
cin>>dollar;

Cents = int(dollar*100);
numberofquarters = Cents/25;
Cents = Cents - (25 *numberofquarters);
numberofdimes = Cents/10;
Cents = Cents - (10 * numberofdimes);
numberofnickels = Cents/5;
numberofpennies = Cents -(5 * numberofnickels);
Totalnoofcoins = numberofquarters + numberofdimes + numberofnickels + numberofpennies;

cout<<"Number of Quarters: "<<numberofquarters<<endl;
cout<<"Number of Dimes: "<<numberofdimes<<endl;
cout<<"Number of Nickels: "<<numberofnickels<<endl;
cout<<"Number of Pennies: "<<numberofpennies<<endl;
cout<<"Number of total coins: " <<Totalnoofcoins<<endl;

return 0;


}