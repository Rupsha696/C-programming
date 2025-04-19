#include <stdio.h>

int main() {
    char str[100], temp;
    int i, length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
