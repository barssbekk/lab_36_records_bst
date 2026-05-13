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
    } while (choice <= MAX_AMOUNT_CHOICE && choice > 0);

    return 0;
}