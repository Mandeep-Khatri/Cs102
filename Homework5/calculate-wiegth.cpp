#include <iostream>
#include <cctype>
using namespace std;

int main() {
char gender;
double bodyWeight, wristMeasurement, waistMeasurement, hipMeasurement;
double A1, A2, A3, A4, B, bodyFat, bodyFatPercentage;
    
cout << "Enter your gender M or F: ";
cin >> gender;
gender = tolower(gender);
    
cout << "Enter your body weight (in pounds): ";
cin >> bodyWeight;
    
if (gender == 'f') {
cout << "Enter your wrist measurement: ";
cin >> wristMeasurement;
cout << "Enter your waist measurement: ";
cin >> waistMeasurement;
cout << "Enter your hip measurement: ";
cin >> hipMeasurement;

A1 = (bodyWeight * 0.732) + 8.987;
A2 = wristMeasurement / 3.140;
A3 = waistMeasurement * 0.157;
A4 = hipMeasurement * 0.434;
        
B = A1 + A2 - A3 - A4;
bodyFat = bodyWeight - B;
bodyFatPercentage = (bodyFat * 100) / bodyWeight;

cout << "Body Fat: " << bodyFat << endl;
cout << "Body Fat Percentage: " << bodyFatPercentage << "%" << endl;
    }
else if (gender == 'm') {
cout << "Enter your wrist measurement: ";
cin >> wristMeasurement;

A1 = (bodyWeight * 1.082) + 94.42;
A2 = wristMeasurement * 4.15;

B = A1 - A2;
bodyFat = bodyWeight - B;
bodyFatPercentage = (bodyFat * 100) / bodyWeight;

cout << "Body Fat: " << bodyFat << endl;
        cout << "Body Fat Percentage: " << bodyFatPercentage << "%" << endl;
}
else {
cout << "Invalid input for gender." << endl;
    }

return 0;
}
