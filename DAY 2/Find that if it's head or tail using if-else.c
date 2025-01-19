#include "stdio.h"
int main() {
    char a;
    printf("Toss the coin");
    scanf("%c",&a);
    if(a == 'h'){
        printf("Its a head");
    }
    else if (a == 't'){
        printf("Its a tail");
    }
    else{
        printf("Invalid");
    }
   
    return 0;
}
