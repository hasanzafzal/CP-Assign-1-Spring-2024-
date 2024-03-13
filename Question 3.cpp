#include <iostream>
using namespace std;

int main() {
    float balance, withdrawal;
    const int maxWithdrawal = 500;
    const float serviceCharge = 25.00;
    cout << "Enter your account balance:";
    cin >> balance;
    if (balance <= 0) {
        cout << "Insufficient funds in your account." << endl;
    }
    cout << "Enter the amount you want to withdraw (maximum $500): $";
    cin >> withdrawal;
    if (withdrawal > balance) {
        cout << "Insufficient funds in your account." << endl;
    }
    else if (withdrawal > maxWithdrawal) {
        cout << "Maximum withdrawal amount is $500" << endl;
    }
     if (balance - withdrawal > serviceCharge) {
        cout << "A $25 service charge will be applied." << endl;
        withdrawal += serviceCharge;
        balance -= withdrawal;
        cout << "Dispensing $" << withdrawal << endl;
        cout << "Your new account balance is: $" << balance << endl;
    }
    else {
        cout << "Transaction failed! Insufficient funds." << endl;
    }
    return 0;
}