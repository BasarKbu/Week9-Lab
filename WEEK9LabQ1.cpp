#include<stdio.h>


int main(){
	int a,b,c;
	printf("Pls enter each number different. \n");
	
	printf("Enter the first number: \n"); scanf("%d",&a);
	printf("Enter the second number: \n"); scanf("%d",&b);
	printf("Enter the third number: \n");  scanf("%d",&c);
	
	if(a>b && a>c)
	printf("A is the biggest. \n");
	if(b>a && b>c)
	printf("B is the biggest. \n");
	if(c>a && c>b)
	printf("C is the biggest. \n");
	
	return 0;
}
