#include "head.h"

int main() {

    graph G = NULL;

    insertNode(G, 10);
    cout << searchNode(G, 10);ln;
    cout << isEmpty(G);ln;
    insertNode(G, 11);
    insertNode(G, 11);ln;
    cout << isEmpty(G);ln;
    insertNode(G, 15);
    readNode(G);ln;
    connect(G,10,15);
    ln;
    readGraphTree(G);


    ln;

    return 0;
}