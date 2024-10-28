#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum;
    cout << "Enter two integers (firstNum should be less than secondNum): ";
    cin >> firstNum >> secondNum;
    
    while (firstNum >= secondNum) {
        cout << "Invalid input. Please enter two integers where firstNum is less than secondNum: ";
        cin >> firstNum >> secondNum;
    }
    cout << "\nOdd numbers between " << firstNum << " and " << secondNum << " are: ";
    int oddNum = firstNum;
    while (oddNum <= secondNum) {
        if (oddNum % 2 != 0) {
            cout << oddNum << " ";
        }
        oddNum++;
    }
    int evenSum = 0;
    int evenNum = firstNum;
    while (evenNum <= secondNum) {
        if (evenNum % 2 == 0) {
            evenSum += evenNum;
        }
        evenNum++;
    }
    cout << "\nSum of all even numbers between " << firstNum << " and " << secondNum << " is: " << evenSum << endl;
    cout << "\nNumbers and their squares between 1 and 10:" << endl;
    int num = 1;
    while (num <= 10) {
        cout << num << " squared is " << (num * num) << endl;
        num++;
    }

    
    int oddSquareSum = 0;
    int oddNumForSquare = firstNum;
    while (oddNumForSquare <= secondNum) {
        if (oddNumForSquare % 2 != 0) {
            oddSquareSum += (oddNumForSquare * oddNumForSquare);
        }
        oddNumForSquare++;
    }
    cout << "\nSum of squares of all odd numbers between " << firstNum << " and " << secondNum << " is: " << oddSquareSum << endl;

    return 0;
}
