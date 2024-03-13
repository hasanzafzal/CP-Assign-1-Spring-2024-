#include <iostream>
using namespace std;

int main() {
	float payRate, hoursWorked, totalIncome, taxes, netIncome, clothesExpense, schoolSuppliesExpense, savingsBondsExpense, parentsContribution;
	cout << "Enter pay rate per hour: $";
	cin >> payRate;
	cout << "Enter hours worked per week: ";
	cin >> hoursWorked;
	totalIncome = payRate * hoursWorked * 5;
	taxes = totalIncome * 0.14;
	netIncome = totalIncome - taxes;
	clothesExpense = netIncome * 0.10;
	schoolSuppliesExpense = netIncome * 0.01;
	savingsBondsExpense = netIncome * 0.25;
	parentsContribution = savingsBondsExpense * 0.50;
	cout << "\nSummer Job Summary\n" << endl;
	cout << "Total income: $" << totalIncome << endl;
	cout << "Taxes paid: $" << taxes << endl;
	cout << "Net income: $" << netIncome << endl;
	cout << "Clothing expense: $" << clothesExpense << endl;
	cout << "School supplies expense: $" << schoolSuppliesExpense;
	cout << "\nSavings bonds expense: $" << savingsBondsExpense << endl;
	cout << "Parents' contribution for savings bonds: $" << parentsContribution << endl;
	return 0;
}