#include "head.h"

int main() {

    Queue Q;
    createQueue(Q);
    read(Q);ln;
    add(Q, allocate(10));

    read(Q);ln;

    add(Q, allocate(1));
    add(Q, allocate(10));
    add(Q, allocate(7));

    read(Q);ln;
    cout << count(Q);ln;
    del(Q);
    read(Q);

    return 0;
}