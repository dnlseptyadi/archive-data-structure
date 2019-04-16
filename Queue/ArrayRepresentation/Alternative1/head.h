#include <iostream>
#define ln cout << endl
#define max 10
using namespace std;

struct Queue {
    int info[max];
    int head,tail;
};

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
};

bool isEmpty(Queue Q) {
    return (Q.head == -1 and Q.tail == -1);
};

bool isFull(Queue Q) {
    return (Q.head == 0 and Q.tail == max - 1);
};

void add(Queue &Q, int a) {
    if(isFull(Q)) cout << "Full Queue";
    else {
        if(isEmpty(Q)) Q.head++;
        Q.tail++;
        Q.info[Q.tail] = a;
    }
};

void del(Queue &Q) {
    if(isEmpty(Q)) cout << "Empty Queue";
    else {
        for(int i = 0;i <= Q.tail;i++) Q.info[i] = Q.info[i+1];
        Q.tail--;
        if(Q.tail == -1) Q.head = -1;
    }
};

void read(Queue Q) {
    if(!isEmpty(Q))
        for(int i = 0;i <= Q.tail;i++) cout << Q.info[i] << " ";
    else cout << "Empty Queue";
}

bool find(Queue Q, int x) {
    if(!isEmpty(Q)) {
        int i = 0;
        if(Q.info[Q.tail] == x) return Q.info[Q.tail] == x;
        else {
            while((i <= Q.tail) and (Q.info[i] != x)) i++;
            return Q.info[i] == x;
        }
    }
    else return 0;
}