#include <stdio.h>

int global_variable = 0;

int a(int x) {return x + 1;}
int b(int x) {return x * 2;}
int c(int x) {return x - 1;}
int d(int x) {return x / 2;}

int main(void) {
    printf("Running main\n");
    int local_variable = 1;

    printf("Set local variable\n");
    return
        a(b(global_variable)) +
        c(d(local_variable));
}
