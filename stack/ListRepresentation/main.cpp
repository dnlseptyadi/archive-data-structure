#include "head.h"

int main() {

   stack S;
   createStack(S);

   read(S); ln;

    push(S, allocate(10));

    read(S); ln;

    for(int i = 1;i < 5;i++) push(S, allocate(i));

    read(S);

    return 0;
}