#include<stdio.h>
int fibonacci(int n){
	int a=0,b=1,next;
	printf("fibpnacci series:");
	for(int i=0;i<n;i++){
		printf("%d ",a);
		next=a+b;
		a=b;
		b=next;
		
	}
}

	int main(){
		int n;
		printf("enter the number");
		scanf("%d",&n);
		if(n<=0){
			printf("enter positive number");
		}
		else{
			fibonacci(n);
			}
			printf("\n");
		
		return 0;
	}
