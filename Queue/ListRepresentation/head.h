#include <iostream>
#define ln cout << endl;

using namespace std;

typedef struct elmQueue *address;

struct elmQueue {
    int info;
    address next;
};

struct Queue {
    address head;
    address tail;
};

void createQueue(Queue &Q) {
    Q.head = NULL;
    Q.tail = NULL;
};

address allocate(int a) {
    address P = new elmQueue;
    P->info = a;
    P->next = NULL;
    return P;
}

bool isEmpty(Queue &Q) {
    return Q.head == NULL;
};

int count(Queue &Q) {
    int i = 0;
    if(!isEmpty(Q)) {
        address P = Q.head;
        while(P != NULL) {
            i++;
            P = P->next;
        }
    }
    return i;
};

void add(Queue &Q, address P) {
    if(isEmpty(Q)) {
        Q.head = P;
        Q.tail = P;
    } else {
        (Q.tail)->next = P;
        Q.tail = P;
    }
};

void del(Queue &Q) {
    if(isEmpty(Q)) cout << "Empty Queue";
    else {
        address P = Q.head->next;
        Q.head->next = NULL;
        Q.head = P;
    }
};

void read(Queue Q) {
    if(isEmpty(Q)) cout << "Empty Queue";
    else {
        address P = Q.head;
        while(P != NULL) {
            cout << P->info << " ";
            P = P->next;
        }
    }
}