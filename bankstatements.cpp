#include<iostream>
using namespace std;
int main() {
 double startAmount, creditTotal = 0.0, debitTotal = 0.0;
 int numTransactions;
 cout << "Enter the amount of cash in your bank account: $";
 cin >> startAmount;
 cout << "Enter the number of transactions for the day: ";
 cin >> numTransactions;
 for (int i = 1; i <= numTransactions; i++) {
 char transactionType;
 double transactionAmount;
 cout << "Transaction " << i << " - Enter transaction type (D for debit, C for credit): ";
 cin >> transactionType;
 cout << "Enter transaction amount: $";
 cin >> transactionAmount;
 if (transactionType == 'D' || transactionType == 'd') {
 if (transactionAmount <= startAmount) {
 startAmount -= transactionAmount;
 debitTotal += transactionAmount;
 }
 else {
 cout << "Not enough cash for debit." << endl;
 }
 }
 else if (transactionType == 'C' || transactionType == 'c') {
 startAmount += transactionAmount;
 creditTotal += transactionAmount;
 }
 else {
 cout << "This doesn't work. Make sure to use 'D' for debit or 'C' for credit." << endl;
 i--; // Decrement i to re-enter the same transaction.
 }
 cout << " Amount after Transaction " << i << ": $" << startAmount << endl;
 }
 cout << "Total credit for today: $" << creditTotal << endl;
 cout << "Total debit for today: $" << debitTotal << endl;
 cout << "Total amount at the end of the day: $" << startAmount << endl;
 return 0;
}
