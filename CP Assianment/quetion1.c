#include<stdio.h>
int main() {
    int A;
    float B;
    double C;
    char D;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(A));
    printf("Size of float: %zu bytes\n", sizeof(B));
    printf("Size of double: %zu bytes\n", sizeof(C));
    printf("Size of char: %zu byte\n", sizeof(D));
    
    return 0;
}