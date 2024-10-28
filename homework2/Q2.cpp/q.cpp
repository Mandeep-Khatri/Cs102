#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    float average;  // Changed to float to maintain decimal values

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;  // Added user input for num1 and num25

    average = (num1 + num2) / 2.0;  // Corrected assignment

    cout << "Average = " << average << endl;

    return 0;
}
