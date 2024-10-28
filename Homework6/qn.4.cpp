#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string customerName;
    int accountNumber;
    double balance;
    char transType;

    cout << "Enter your name: ";
    cin>>customerName;
    
    cout << "Enter your 6-digit account number: ";
    cin >> accountNumber;

    if (accountNumber < 100000 || accountNumber > 999999) {
    cout << "Invalid account number! Please enter a 6-digit account number." << endl;
    } 
    cout << "Enter the starting balance: $";
    cin >> balance;

    cout << "Enter the transaction type (D for deposit, W for withdraw, A for account balance): ";
    cin >> transType;
    transType= tolower(transType);
    switch (transType) {
    case 'a':
    cout << "Your account balance is: $" << balance << endl;
    break;
    case 'd': {
    double depositAmount;
    cout << "Enter the deposit amount: $";
    cin >> depositAmount;
    balance += depositAmount;
    cout << "Deposit successful! Your new balance is: $" << balance << endl;
    break;
    }
    case 'w': {
    double withdrawAmount;
    cout << "Enter the withdraw amount: $";
    cin >> withdrawAmount;

    if (withdrawAmount <= (balance - 200)) {
    balance -= withdrawAmount;
    cout << "Withdraw successful! Your new balance is: $" << balance << endl;
    } else {
    cout << "Insufficient balance for withdrawal." << endl;
    cout << "Your current balance is: $" << balance << endl;
    cout << "Maximum you can withdraw is: $" << (balance - 200) << endl;
    }
    break;
    }

    default:
    cout << "Invalid transaction type! Please enter D, W, or A." << endl;
    break;
    }
    return 0;
}
