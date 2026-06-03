#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Add Expense feature coming soon.\n";
                break;

            case 2:
                cout << "View Expenses feature coming soon.\n";
                break;

            case 3:
                cout << "Thank you for using Expense Tracker!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
