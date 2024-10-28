#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float sum, sum_of_square, mean, number, variance;
  float standard_deviation, x1,x2,x3,x4,x5;
  number = 5;
  cout<< fixed<<setprecision(2);
  cout<<"Enter x1:";
  cin>>x1;
  cout<<"Enter x2:";
  cin>>x2;
  cout<<"Enter x3:";
  cin>>x3;
  cout<<"Enter x4:";
  cin>>x4;
  cout<<"Enter x5:";
  cin>>x5;
  
  sum = x1 + x2 + x3 + x4 + x5;
  cout<<"Sum of number is "<<sum<<endl;
  
  sum_of_square = pow(sum, 2);
  cout<<"Sum Of Square number is "<<sum_of_square<<endl;
  
  mean = sum/number;
  cout<<"Mean is "<<mean<<endl;
  
  variance = (sum_of_square -number * pow(mean,2))/(number-1);
  cout<<"Variance Number is "<<variance<<endl;
  
  standard_deviation = sqrt(variance);
  cout<<"Standard Deviation is " <<standard_deviation<<endl;
  
}