#include<stdio.h>

int main(){
	int reverse=0,n,temp,temp2;
	printf("Enter a number: \n"); scanf("%d",&n);
	temp2=n;
	while(n!=0){
		temp = n % 10;
		reverse = reverse*10+temp;
		n/=10;
	}
	if(temp2 == reverse)
	printf("The number you have entered is polindrome. \n");
	else
	printf("The number you have entered is not a polindrome \n");
	
	return 0;
}
