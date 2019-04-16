#include <iostream>
#include <string>

using namespace std;

typedef int infotype;

typedef struct elemen *address;

struct elemen {
    infotype info;
    address next;
    address prev;
};

struct list {
    address first;
    address last;
};

void CreateList(list &L);
address Allocate(infotype P);

void InsertFirst(list &L, address P);
void InsertLast(list &L, address P);
void InsertAfter(list &L, address Prec, address P);
void DeleteFirst(list &L);
void DeleteLast(list &L);
void DeleteAfter(list &L, address Prec);
void Print(list &L);