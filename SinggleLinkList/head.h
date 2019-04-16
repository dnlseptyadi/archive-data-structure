#include <iostream>

using namespace std;

typedef struct elm *address;

struct elm {
    int info;
    address next;
};

struct list {
    address first;
};

void createList(list &L) {
    L.first = NULL;
};

address allocate(int x) {
    address P = new elm;
    P->info = x;
    P->next = NULL;
    return P;
};

void insertFirst(list &L, address P) {
    if(L.first == NULL) L.first = P;
    else {
        P->next = L.first;
        L.first = P;
    }
};

void insertLast(list &L, address P) {
    if(L.first == NULL) L.first = P;
    else {
        address Q = L.first;
        while(Q->next != NULL) Q = Q->next;
        Q->next = P;
    }   
};

void read(list &L) {
    if(L.first == NULL) cout << "Empty List";
    else {
        address P = L.first;
        while(P != NULL) {
            cout << P->info << " ";
            P = P->next;
        }
    }
};

address search(list &L, address P) {
    if(L.first == NULL) return NULL;
    else {
        address Q = L.first;
        while(Q != NULL && Q->info != P->info)
            Q = Q->next;
        return (Q != NULL) ? Q : NULL;
    }
};

void readSearch(list &L, address P) {
    // cout << (search(L, P) == NULL) ? "Empty List" : P->info;
    if(search(L, P) == NULL) cout << "Not Found" << endl;
    else cout << P->info << endl;
};

void update(list &L, address P, address Q) {
    if(search(L, P) == NULL) cout << "Nohting to Update";
    else P->info = Q->info;
};

void deleteFirst(list &L) {
    if(L.first == NULL) cout << "Empty List" << endl;
    else if (L.first->next == NULL) L.first = NULL;
    else {
        address P = L.first;
        L.first = P->next;
        P->next = NULL;
    }
};

void deleteLast(list &L) {
    if(L.first == NULL) cout << "Empty List" << endl;
    else if (L.first->next == NULL) L.first = NULL;
    else {
        address P = L.first;
        while(P->next != NULL) P = P->next;
        P->next = NULL;
    }
};