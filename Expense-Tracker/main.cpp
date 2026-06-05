#include <iostream>
using namespace std;

int main() {
    int choice;
    double expenses[100];
    int expenseCount = 0;
    double totalExpense = 0;
    double amount;

    do {
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Total Expense\n";
        cout << "3. View Expense History\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (expenseCount < 100) {
                    cout << "Enter expense amount: Rs. ";
                    cin >> amount;

                    if (amount > 0) {
                        expenses[expenseCount] = amount;
                        expenseCount++;
                        totalExpense += amount;

                        cout << "Expense added successfully.\n";
                    } else {
                        cout << "Invalid amount. Please enter a positive value.\n";
                    }
                } else {
                    cout << "Expense limit reached.\n";
                }
                break;

            case 2:
                cout << "Total Expense: Rs. " << totalExpense << endl;
                break;

            case 3:
                if (expenseCount == 0) {
                    cout << "No expenses added yet.\n";
                } else {
                    cout << "\n===== Expense History =====\n";
                    for (int i = 0; i < expenseCount; i++) {
                        cout << i + 1 << ". Rs. " << expenses[i] << endl;
                    }
                }
                break;

            case 4:
                cout << "Thank you for using Expense Tracker.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
