#ifndef LAB_14_LIST_H
#define LAB_14_LIST_H

#endif //LAB_14_LIST_H


struct Els {
    char data[8];
    struct Els *next;
};


void pop(struct Els *els);

struct Els *Els(char data[8]);

struct Els *ElsFromArray(char *data[8], int n);

void append(struct Els *els, char element[8]);

void print(struct Els *els);