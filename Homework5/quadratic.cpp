#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main()
{
double a, b, c;
double discriminant, x1, x2;  
    
cout << "Enter coefficients a, b, and c: ";
cin >> a >> b >> c;

if (a == 0){ 
cout << "This is not a quadratic equation." << endl;
    
    discriminant = b * b - 4 * a * c;
}
if (discriminant > 0)
{
x1 = (-b + sqrt(discriminant)) / (2 * a);
x2 = (-b - sqrt(discriminant)) / (2 * a);
cout << "The equation has two distinct real roots: " << endl;
cout << "x1 = " << x1 << endl;
cout << "x2 = " << x2 << endl;
}
else if (discriminant == 0) {
x1 = -b / (2 * a);
cout << "The equation has one real root: " << endl;
cout << "x1 = x2 = " << x1 << endl;
}
else

cout<<"Complex root"<<endl    

    return 0;
}

