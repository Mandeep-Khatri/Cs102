#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ifstream indata;
    ofstream outdata;
    indata.open("man.txt");
    outdata.open("results.txt");
    string xtitle, ytitle;
    indata>>xtitle>>ytitle;
    int x; 
    int y;
    int i;
    double r;
    double theta;
    
    i=1;
    outdata << setw(10) << left <<xtitle<< setw(10) << left <<ytitle<< setw(10) << left <<r<< setw(10) << left <<theta<<endl;
    while (i<=7)
    {
        indata>>x>>y;
    r = sqrt(pow(x,2) + pow(y,2));
    theta = atan(y/x);
    cout << setw(10) << left <<x<< setw(10) << left <<y<< setw(10) << left <<"r"<< setw(10) << left <<"theta"<<endl;
    outdata << setw(10) << left <<x<< setw(10) << left <<y<< setw(10) << left <<r<< setw(10) << left <<theta<<endl;
    i++;
    }
    return 0;
}
    
    