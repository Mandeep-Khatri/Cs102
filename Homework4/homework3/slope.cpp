#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float x1, y1;
  float x2, y2;
  float slope, length;
  float xmid, ymid;
  cout << "Enter x1: ";
  cin >> x1;
  cout << "Enter y1: ";
  cin >> y1;
  cout << "Enter x2: ";
  cin >> x2;
  cout << "Enter y2: ";
  cin >> y2;

  slope = (y2 - y1) / (x2 - x1);

  length = sqrt(pow((y2 - y1), 2) + pow((x2 - x1), 2));

  xmid = (x2 + x1) / 2;

  ymid = (y2 + y1) / 2;

  float yintercept = y1 - (slope * x1);

  cout << fixed << setprecision(2);
  cout << "slope = " << slope << endl;
  cout << "length = " << length << endl;
  cout << "midpoint of xmid = " << xmid << endl;
  cout << "midpoint of ymid = " << ymid << endl;
  cout << "Y-intercept = " << yintercept << endl;

  return 0;
}