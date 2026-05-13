// COMSC-210 || Lab 38 || Barsbek
#include <iostream>
#include <string>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

const int MAX_AMOUNT_CHOICE = 5;

int main() {
    // Load records from file into BST
    ifstream fileInput("codes.txt");
    if (!fileInput) { // check if file opens
        cerr << "File not found\n";
        return 1;
    }
    IntBinaryTree tree;
    string code;

    // Populates BST with record from file
    while (fileInput >> code)
        tree.insertNode(code);

    int choice = 0;
    do
    {
        cout << "\n---MENU---\n"
             << "1. Add\n"
             << "2. Delete\n"
             << "3. Search\n"
             << "4. Display\n"
             << "5. Exit\n"
             << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            // Add new record into tree
            case 1:
                cout << "Enter code to add: ";
                cin >> code;
                tree.insertNode(code);
                cout << "Record added\n";
                break;

            // Remove record from tree
            case 2:
                cout << "Enter code to delete: ";
                cin >> code;
                tree.remove(code);
                cout << "Record deleted\n";
                break;

            // Check wheter record exists
            case 3:
                cout << "Enter code to search: ";
                cin >> code;

                if (tree.searchNode(code))
                    cout << "Record found\n";
                else
                    cout << "Record not found\n";
                break;

            // Print  sorted record
            case 4:
                cout << "\nRecords:\n";
                tree.displayInOrder();
                break;

            // End menu loop
            case 5:
                cout << "Exiting...\n";
                break;

            // If different output, invalid
            default:
                cout << "Invalid choice. Try again\n";
        }
    } while (choice != MAX_AMOUNT_CHOICE);

    return 0;
}