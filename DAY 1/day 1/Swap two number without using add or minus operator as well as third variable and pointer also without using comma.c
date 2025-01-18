#include<stdio.h>
int main(){
int a=6,b=8;
a^=b^=a^=b;
printf("a=%d b=%d",a,b);
return 0;
}
