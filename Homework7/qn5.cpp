#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    float sum = 0.0, sumOfSquare = 0.0, number;
    cout << "Enter the number of values (N): ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;
        sumOfSquare += number * number;
    }
    float average = sum / N;
    float variance = (sumOfSquare - N * average * average) / (N - 1);
    float standardDeviation = sqrt(variance);
    cout << "\nResults:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Sum of Squares: " << sumOfSquare << endl;
    cout << "Average: " << average << endl;
    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;

    return 0;
}
