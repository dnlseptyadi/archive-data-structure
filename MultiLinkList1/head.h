#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

struct infotype_stud {
    string id;
    string name;
};
struct infotype_class {
    string class_name;
    string supervisor;
};
typedef struct elm_stud*adr_stud;
typedef struct elm_class*adr_class;

struct elm_stud {
    infotype_stud info;
    adr_stud next;
    adr_class nextClass;
};
struct elm_class {
    infotype_class info;
    adr_class next;
};

struct list_stud {
    adr_stud first;
};
struct list_class {
    adr_class first;
};

void createListStud(list_stud &S);
void createListClass(list_class &C);

adr_stud allocate_stud(infotype_stud x);
adr_class allocate_class(infotype_class x);

void deleteClass(list_class &L, adr_class Q);
adr_class search_class(list_class &L, string kelas);

void insertLastStud(list_stud &S, adr_stud P);
void insertLastClass(list_class &C, adr_class P);

void setClass(list_stud L1, list_class L2, string id, string kelas);
void del_class(list_stud L1, list_class L2, string kelas);

void printStud(list_stud &S);
void printClass(list_class &C);