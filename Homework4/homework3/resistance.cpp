#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float R, R1, R2, R3;
  float V,P,I ;
  cout<<"Enter R1: ";
  cin>>R1;
  cout<<"Enter R2: ";
  cin>>R2;
  cout<<"Enter R3: ";
  cin>>R3;
  cout<<"Enter Voltage: ";
  cin>>V;
  
  R = 1/((1/R1) + (1/R2) + (1/R3));
  
  I = V/R;
  
  P = I * V;
  
  cout<<fixed<<setprecision(1);
  cout<<"Resistance = " <<R<<endl;
  cout<<"Current = "<<I<<endl;
  cout<<"Power = "<<P<<endl;
  
  return 0;
  
  
}