#include <iostream>

using namespace std;

typedef struct elm *address;

struct elm {
    int info;
    address next;
};

struct list {
    address first;
    address last;
};

void createList(list &L) {
    L.first = NULL;
    L.last = NULL;
};

address allocate(int x) {
    address P = new elm;
    P->info = x;
    P->next = NULL;
    return P;
};

void insertFirst(list &L, address P) {
    if(L.first == NULL){
        L.first = P;
        L.last = P;
        L.last->next = L.first;
    }else {
        P->next = L.first;
        L.first = P;
        L.last->next = L.first;
    }
};

void insertLast(list &L, address P) {
    if(L.first == NULL){
        L.first = P;
        L.last = P;
        L.last->next = L.first;
    }
    else {
        L.last->next = P;
        L.last = P;
        P->next = L.first;
    }   
};

void read(list &L) {
    if(L.first == NULL) cout << "Empty List";
    else {
        address P = L.first;
        do {
            cout << P->info << " ";
            P = P->next;
        }while(P != L.first);
    }
};

address search(list &L, address P) {
    if(L.first == NULL) return NULL;
    else {
        address Q = L.first;
        while(Q->next != L.first && Q->info != P->info)
            Q = Q->next;
        
        if (Q != NULL && Q->info == P->info)
        {
            return Q;
        }else{
            return NULL;
        }
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
    else if (L.first == L.last) L.first = NULL;
    else {
        address P = L.first;
        L.first = P->next;
        L.last->next = L.first;
        P->next = NULL;
    }
};

void deleteLast(list &L) {
    if(L.first == NULL) cout << "Empty List" << endl;
    else if (L.first->next == NULL) L.first = NULL;
    else {
        address P = L.first;
        address Q = L.last;
        while(P->next != L.last) P = P->next;
        L.last = P;
        P->next = L.first;
        Q->next = NULL;
    }
};