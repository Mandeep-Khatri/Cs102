#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    int N;
    cout<<"Enter the Numbers: "<<endl;
    cin>>N;
    int sum1 = 0;
    int sum2 = 0;
    double sum3 = 0;
    double a;
    double r;
    double factorial=1;
    double sum4;
    
    cout<<"Enter the values of a and r: "<<endl;
    cin>>a>>r;
    for(int i=1;i<=N;i++){
        sum1 = sum1+i;
        sum2=sum1+ pow(i,2);
        sum3= sum3+1/i;
        factorial = factorial*i;
        a= a*r;
        sum4 = sum4 +a;
    }
    cout<<"value of sum1: "<<sum1<<endl;
    cout<<"value of sum2: "<<sum2<<endl;
    cout<<"value of sum3: "<<sum3<<endl;
    cout<<"value of sum4: "<<sum4<<endl;
    
    
    
    }
        
    
    

    
    