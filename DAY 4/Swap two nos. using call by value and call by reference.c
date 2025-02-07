#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swapByReference function: *a = %d, *b = %d\n", *a, *b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call by Value
    printf("\n--- Call by Value ---\n");
    swapByValue(x, y);
    printf("After swapByValue function: x = %d, y = %d\n", x, y);

    printf("\n--- Call by Reference ---\n");
    swapByReference(&x, &y);
    printf("After swapByReference function: x = %d, y = %d\n", x, y);

    return 0;
}
