#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    double expenses[100];
    string categories[100];
    int expenseCount = 0;
    double totalExpense = 0;
    double amount;
    string category;

    do {
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Total Expense\n";
        cout << "3. View Expense History\n";
        cout << "4. View Saved Expenses\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (expenseCount < 100) {
                    cout << "Enter expense amount: Rs. ";
                    cin >> amount;

                    if (amount > 0) {
                        cout << "Enter category (Food/Travel/Shopping/Other): ";
                        cin >> category;

                        expenses[expenseCount] = amount;
                        categories[expenseCount] = category;
                        expenseCount++;
                        totalExpense += amount;

                        ofstream file("expenses.txt", ios::app);
                        file << amount << " " << category << endl;
                        file.close();

                        cout << "Expense added and saved successfully.\n";
                    } else {
                        cout << "Invalid amount. Please enter a positive value.\n";
                    }
                } else {
                    cout << "Expense limit reached.\n";
                }
                break;
            }

            case 2:
                cout << "Total Expense: Rs. " << totalExpense << endl;
                break;

            case 3:
                if (expenseCount == 0) {
                    cout << "No expenses added in this session.\n";
                } else {
                    cout << "\n===== Expense History This Session =====\n";
                    for (int i = 0; i < expenseCount; i++) {
                        cout << i + 1 << ". Rs. " << expenses[i]
                             << " - " << categories[i] << endl;
                    }
                }
                break;

            case 4: {
                ifstream file("expenses.txt");
                double savedAmount;
                string savedCategory;
                int count = 1;

                cout << "\n===== Saved Expenses =====\n";

                if (!file) {
                    cout << "No saved expenses found.\n";
                } else {
                    while (file >> savedAmount >> savedCategory) {
                        cout << count << ". Rs. " << savedAmount
                             << " - " << savedCategory << endl;
                        count++;
                    }

                    if (count == 1) {
                        cout << "No saved expenses found.\n";
                    }

                    file.close();
                }
                break;
            }

            case 5:
                cout << "Thank you for using Expense Tracker.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
