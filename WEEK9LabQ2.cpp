#include<stdio.h>
//This program calculates the factorial of the number you have entered.
int main(){
	int N,i,fact=1;
	printf("Enter the number. \n"); scanf("%d",&N);
	
	for(i=2;i<=N;i++){
		fact*=i;
	}
	
	printf("The factorial of the number you have entered:%d ",fact);
	
	return 0;
}
