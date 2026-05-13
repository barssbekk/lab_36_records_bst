// COMSC-210 || Lab 38 || Barsbek
#include <iostream>
#include <string>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

const int MAX_AMOUNT_CHOICE = 5;

int main() {
    ifstream fileInput("codes.txt");
    if (!fileInput) { // check if file opens
        cerr << "File not found\n";
        return 1;
    }
    IntBinaryTree tree;
    string code;

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
            case 1:
                cout << "Enter code to add: ";
                cin >> code;
                tree.insertNode(code);
                cout << "Record added.\n";
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cout << "\nRecords:\n";
                tree.displayInOrder();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again\n";
        }
    } while (choice != MAX_AMOUNT_CHOICE);

    return 0;
}