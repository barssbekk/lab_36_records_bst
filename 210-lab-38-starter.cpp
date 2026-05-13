// COMSC-210 || Lab 38 || Barsbek
#include <iostream>
#include <string>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

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

    tree.displayInOrder();

    return 0;
}