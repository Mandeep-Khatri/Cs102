#include <iostream>
#include <cmath>
using namespace std;

int main() {
double h; 
double fee;
    
cout << "Enter number of hours that car is parked: ";
cin >> h;
if (h >= 0 && h <= 3) 
fee = 5; 

else if (h > 3 && h < 9) 
fee = 6 * int(h + 1);
else if (h >= 9 && h <= 24)
fee = 60; 
else
cout << "Invalid input" << endl;
cout << "The parking fee is: $" << fee << endl;
return 0;
}


