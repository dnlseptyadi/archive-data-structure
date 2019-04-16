#include "head.h"

int main() {

    Queue Q;
    createQueue(Q);

    read(Q);ln;

    add(Q, 10);
    add(Q, 20);
    add(Q, 30);
    add(Q, 40);
    add(Q, 1);

    read(Q);ln;

    cout << Q.head << " " << Q.tail;ln;

    add(Q, 2);ln;
    del(Q);

    cout << Q.head << " " << Q.tail;ln;

    return 0;
}