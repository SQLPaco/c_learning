#include <stdio.h>

int add (int x, int y) {
    return x + y;
}

int main() {
    int result = add(3,4);
    printf("Result: %d\n", result);

    return 0;
}
