#include <iostream>
using namespace std;

int main() {
    int choice;
    double totalExpense = 0;
    double amount;

    do {
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Total Expense\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter expense amount: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    totalExpense += amount;
                    cout << "Expense added successfully.\n";
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 2:
                cout << "Total Expense: Rs. " << totalExpense << endl;
                break;

            case 3:
                cout << "Thank you for using Expense Tracker.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
