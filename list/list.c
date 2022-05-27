#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Els *getLastNode(struct Els *els) {
    struct Els *p;
    p = els;
    while (p->next != NULL) {
        p = p->next;
    }

    return p;
}

struct Els *Els(char data[8]) {
    struct Els *els = malloc(sizeof(struct Els));

    strcpy_s(els->data, sizeof(els->data), data);
    els->next = NULL;

    return els;
}

struct Els *ElsFromArray(char *data[8], int n) {
    struct Els *els = Els(data[0]);
    struct Els *p = els;
    for (int i = 1; i < n; i++) {
        p->next = Els(data[i]);
        p = p->next;
    }

    return els;
}

void append(struct Els *els, char element[8]) {
    struct Els *lastNode = getLastNode(els);

    lastNode->next = Els(element);
}

void print(struct Els *els) {
    struct Els *p;
    p = els;
    do {
        printf("%s; ", p->data);
        p = p->next;
    } while (p != NULL);

    printf("\n");
}

void pop(struct Els *els) {
    struct Els *p = els;
    struct Els *next;
    while (1) {
        if (p->next != NULL) {
            next = p->next;
            if (next->next == NULL) {
                free(next);
                p->next = NULL;
                break;
            } else {
                p = next;
            }
        } else {
            free(p);
            break;
        }
    }
}
