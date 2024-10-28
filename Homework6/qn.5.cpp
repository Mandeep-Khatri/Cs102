#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int accountNumber;
char customerCode;
int numPremiumChannels;
int numBasicConnections = 0; 
double billAmount = 0.0;

cout << "Enter your account number: ";
cin >> accountNumber;

   
cout << "Enter customer type (R for residential, B for business): ";
cin >> customerCode;

 
customerCode = toupper(customerCode);

switch (customerCode) {
case 'R': {
const double BILL_PROCESSING_FEE = 5.50;
const double BASIC_SERVICE_FEE = 20.50;
const double PREMIUM_CHANNEL_FEE = 7.50;
cout << "Enter the number of premium channels: ";
cin >> numPremiumChannels;
billAmount = BILL_PROCESSING_FEE + BASIC_SERVICE_FEE + (PREMIUM_CHANNEL_FEE * numPremiumChannels);
break;
}
case 'B': {
const double BILL_PROCESSING_FEE = 15.00;
const double BASIC_SERVICE_FEE_FIRST_10 = 75.00;
const double BASIC_SERVICE_FEE_ADDITIONAL = 5.00;
const double PREMIUM_CHANNEL_FEE = 50.00;
cout << "Enter the number of basic service connections: ";
cin >> numBasicConnections;
cout << "Enter the number of premium channels: ";
cin >> numPremiumChannels;
if (numBasicConnections <= 10) {
billAmount = BILL_PROCESSING_FEE + BASIC_SERVICE_FEE_FIRST_10 + (PREMIUM_CHANNEL_FEE * numPremiumChannels);
} else 
{
billAmount = BILL_PROCESSING_FEE + BASIC_SERVICE_FEE_FIRST_10 + 
(numBasicConnections - 10) * BASIC_SERVICE_FEE_ADDITIONAL + 
(PREMIUM_CHANNEL_FEE * numPremiumChannels);
}
break;
}
default:
cout << "Invalid customer type entered. Please use R for Residential or B for Business." << endl;
return 1;  
}
cout << fixed << setprecision(2); 
cout << "Account number: " << accountNumber << endl;
cout << "Total bill: $" << billAmount << endl;

    return 0;
}
