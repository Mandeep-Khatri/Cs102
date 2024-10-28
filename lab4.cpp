#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float area;
    float volume;
    int shape;
    float a, b, c;
    const float PI = 3.14;
    float radius, height, length, width;

    cout << "Enter the shape type: ";
    cin >> shape;
    cout << fixed << setprecision(2);

    switch (shape)
    {
    case 1:
    {
        cout << "You selected Triangle." << endl;
        cout << "Enter side a: ";
        cin >> a;
        cout << "Enter side b: ";
        cin >> b;
        cout << "Enter side c: ";
        cin >> c;
        float s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The area of the triangle is: " << area << endl;
        break;
    }
    case 2:
    {
        cout << "You selected Square." << endl;
        cout << "Enter the side length of the square: ";
        cin >> a;
        area = a * a;
        cout << "The area of the square is: " << area << endl;
        break;
    }
    case 3:
    {
        cout << "You selected Rectangle." << endl;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
        break;
    }
    case 4:
    {
        cout << "You selected Circle." << endl;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * radius * radius;
        cout << "The area of the circle is: " << area << endl;
        break;
    }
    case 5:
    {
        cout << "You selected Cylinder." << endl;
        cout << "Enter the radius of the cylinder: ";
        cin >> radius;
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        volume = PI * radius * radius * height;
        cout << "The volume of the cylinder is: " << volume << endl;
        break;
    }
    case 6:
    {
        cout << "You selected Sphere." << endl;
        cout << "Enter the radius of the sphere: ";
        cin >> radius;
        volume = (4.0 / 3.0) * PI * pow(radius, 3);
        cout << "The volume of the sphere is: " << volume << endl;
        break;
    }
    case 7:
    {
        cout << "You selected Cone." << endl;
        cout << "Enter the radius of the cone: ";
        cin >> radius;
        cout << "Enter the height of the cone: ";
        cin >> height;
        volume = (1.0 / 3.0) * PI * radius * radius * height;
        cout << "The volume of the cone is: " << volume << endl;
        break;
    }
    default:
        cout << "Shape type does not exist." << endl;
        break;
    }

    return 0;
}
