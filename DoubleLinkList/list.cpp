#include "list.h"

void CreateList(list &L) {
    L.first = NULL;
    L.last = NULL;
};
address Allocate(infotype x) {
    address P = new elemen;
    P->info = x;
    return P;
};

void InsertFirst(list &L, address P) {
    if(L.first == NULL && L.last == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
};


void InsertLast(list &L, address P) {
    if(L.first == NULL && L.last == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
};
void InsertAfter(list &L, address Prec, address P);
void DeleteFirst(list &L) {
    if(L.first == NULL && L.last == NULL) {
        cout << "Empty List" << endl;
    } else if(L.first == L.last) {
        L.first = NULL;
        L.last = NULL;
    } else {
        address P = L.first;
        L.first = P->next;
        L.first->prev = NULL;
        P->next = NULL;
    }
};
void DeleteLast(list &L) {
    if(L.first == NULL && L.last == NULL) {
        cout << "Empty List" << endl;
    } else if (L.first == L.last) {
        L.first = NULL;
        L.last = NULL;
    } else {
        address P = L.last;
        L.last = P->prev;
        L.last->next = NULL;
        P->prev = NULL;
    }
};
void DeleteAfter(list &L, address Prec);
void Print(list &L) {
    if (L.first == NULL && L.last == NULL) {
        cout << "Empty List" << endl;
    } else {
        address P = L.first;
        while(P != NULL) {
            cout << P->info << ", ";
            P = P->next;
        }
    }
};