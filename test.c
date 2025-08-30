#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "vector.h"

#define VECTOR_TEST 1

#if VECTOR_TEST
void print_int_vec(vec_t *vec) {
    int item;
    int i = 0;
    int ret;
    ret = get(vec, i, &item);
    while (ret >= 0) {
        i++;
        printf("%d, ", item);
        ret = get(vec, i, &item);
    }
    printf("\n");
}
#endif

int main(int argc, char **argv) {
    #if VECTOR_TEST
    vec_t int_vec;
    int x = 10;
    int ret;
    vec_init(&int_vec, sizeof(int), 10, 20);
    append(&int_vec, &x);
    x = 5;
    append(&int_vec, &x);
    x = 25;
    append(&int_vec, &x);
    x = 3;
    append(&int_vec, &x);
    x = -80;
    append(&int_vec, &x);
    print_int_vec(&int_vec);
    x = 95;
    set(&int_vec, 2, &x);
    print_int_vec(&int_vec);
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = pop(&int_vec, &x);
    if (ret < 0) {
        printf("nothing to pop\n");
    } else {
        printf("popped: %d\n", x);
    }
    ret = set(&int_vec, 20, &x);
    if (ret < 0) {
        printf("failed to set\n");
    }
    ret = get(&int_vec, 0, &x);
    if (ret < 0) {
        printf("failed to get\n");
    }
    print_int_vec(&int_vec);
    #endif
}


