#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "Enter a positive integer X as the limit for Fibonacci numbers: ";
    cin >> X;

    while (X <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> X;
    }
    int first = 1, second = 1;
    cout << "Fibonacci numbers up to " << X << " are: ";
    if (X >= 1) {
        cout << first << " ";
    }
    while (second <= X) {
        cout << second << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
