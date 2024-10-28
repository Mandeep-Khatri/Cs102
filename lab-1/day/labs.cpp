#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c;
    float area,  angleA, angleB, angleC;
    float ratio1, ratio2, ratio3;
    const float PI = 3.1415927;

    cout << "Enter three sides  of a triangle: ";
    cin >> a >> b >> c;
    float perimeter = a + b + c;
    float s;

    s= 0.5 * perimeter;
    area = sqrt (s * (s - a) * (s - b) * (s - c));
    ratio1 = (pow(b,2) + pow(c,2) - pow(a,2))/(2 * b *c);
    ratio1 = (pow(c,2) + pow(a,2) - pow(b,2))/(2 * c *a);
    ratio1 = (pow(a,2) + pow(b,2) - pow(c,2))/(2 * a *b);
    float rad_degree = 180/ PI;

    angleA = rad_degree * acos(ratio1);
    angleB = rad_degree * acos(ratio2);
    angleC = rad_degree * acos(ratio3);

    cout << "Area of the triangle: " << area << endl;
    cout << "Angle A: " << angleA << " degrees" << endl;
    cout << "Angle B: " << angleB << " degrees" << endl;
    cout << "Angle C: " << angleC << " degrees" << endl;

    return 0;
}