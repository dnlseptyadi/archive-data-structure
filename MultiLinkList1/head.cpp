#include "head.h"

void createListStud(list_stud &S){
    S.first = NULL;
};
void createListClass(list_class &C){
    C.first = NULL;
};

adr_stud allocate_stud(infotype_stud x) {
    adr_stud P = new elm_stud;
    P -> info = x;
    P -> next = NULL;
    P -> nextClass = NULL;
    return P;
};
adr_class allocate_class(infotype_class x) {
    adr_class P = new elm_class;
    P -> info = x;
    P -> next = NULL;
    return P;
};

void deleteClass(list_class &L, adr_class Q){
    adr_class P = L.first;
    while (P != NULL && P -> next != Q) {
        P = P -> next;
    };
    P -> next = Q -> next;
    Q -> next = NULL;
};
adr_class search_class(list_class &L, string kelas){
    adr_class Q = L.first;
    while (Q != NULL && Q->info.class_name != kelas) {
        Q = Q -> next;
    };
    if (Q == NULL){
        return NULL;
    }
    else {
        return Q;
    }
};
adr_stud search_stud(list_stud &L, string id){
    adr_stud Q = L.first;
    while (Q != NULL && Q->info.id != id) {
        Q = Q->next;
    };
    if (Q != NULL){
        return Q;
    } else {
        return NULL;
    }
};
void insertLastStud(list_stud &S, adr_stud P){
    if (S.first == NULL) {
        S.first = P;
        S.first -> next = NULL;
    } 
    else {
        adr_stud Q = S.first;
        while (Q != NULL) {
            Q = Q -> next;
        }
        Q -> next = P;
    };
};
void insertLastClass(list_class &C, adr_class P){
    if (C.first == NULL) {
        C.first = P;
        C.first -> next = NULL;
    } else {
        adr_class Q = C.first;
        while (Q != NULL) {
            Q = Q -> next;
        };
        Q -> next = P;
    };
};
void setClass(list_stud L1, list_class L2, string id, string kelas){
    adr_stud P;
    adr_class Q;
    P = search_stud(L1,id);
    Q = search_class(L2, kelas);
    if (P != NULL && Q != NULL){
        P->nextClass = Q;
    };
};
void del_class(list_stud L1, list_class L2, string kelas){
    adr_stud P;
    adr_class Q;
    Q = search_class(L2, kelas);
    if (Q != NULL) {
        P = L1.first;
        while (P != NULL){
            if (P->nextClass == Q){
                P->nextClass = NULL;
            };
            P = P -> next;
        };
        deleteClass(L2, Q);
    };
};
void printStud(list_stud &S){
    if (S.first == NULL){
        cout << "Empty List" << endl;
    } else {
        adr_stud P = S.first;
        int i = 1;
        while (P != NULL) {
            cout << "#" << i << ". " << P->info.id << " " << P->info.name << endl;
            P = P -> next;
        }
    };
};
void printClass(list_class &C){
    if (C.first == NULL){
        cout << "Empty List" << endl;
    } else {
        adr_class P = C.first;
        while (P != NULL) {
            cout << P -> info.class_name << " " << P->info.supervisor << endl;
            P = P -> next;
        }
    };
};
