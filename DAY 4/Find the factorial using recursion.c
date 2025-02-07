#include<stdio.h>
int factorial(int n){

if(n==0||n==1)
return(1);
else
return n*factorial(n-1);}
int main(){

int n,f;
printf("enter the number to find factorial");
scanf("%d",&n);
f=factorial(n);
 printf("the factorial of the number is:%d",f);
 return 0;
}
