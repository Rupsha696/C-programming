#include <stdio.h>
int main() {
  int year;
  printf("Enter the year");
  scanf("%d",&year);
  if(year % 400==0){
      printf("It's a leap year");
  }
  else if (year % 100==0){
      printf("It's not a leap year");
  }
  else if(year % 4==0){
      printf("It's a leap year");
  }
  else{
      printf("it's not a leap year");
  }
    return 0;
}
