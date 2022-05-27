#include "list/list.h"


void removeLastTwoElements(struct Els *els) {
    pop(els);
    pop(els);
}

int main() {
    char *data[10] = {"one",
                      "two",
                      "three",
                      "four",
                      "five",
                      "six",
                      "seven",
                      "eight",
                      "nine",
                      "ten"};
    struct Els *els = ElsFromArray(data, 10);
    print(els);
    removeLastTwoElements(els);
    print(els);
    append(els, "new");
    print(els);
    return 0;
}
