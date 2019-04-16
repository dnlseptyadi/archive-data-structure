#include "head.h"

int main() {

    address root = NULL;

    insertNode(root, allocate(4));
    insertNode(root, allocate(5));
    insertNode(root, allocate(10));
    insertNode(root, allocate(3));
    insertNode(root, allocate(1));
    insertNode(root, allocate(7));
    
    
    preOrder(root);cout << endl;
    cout << "Kedalaman Root : " << depth(root) << endl
         << "Kedalaman 1    : " << depthX(root, 1) << endl
         << "Kedalaman 4    : " << depthX(root, 4) << endl;

    printLevelOrder(root);


    cout << endl;
    return 0;
}