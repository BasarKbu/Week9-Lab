#include<stdio.h>
#include<math.h>
//Calculates this series (1+x+x^2....)
int main(){
	int i,n,j;
	printf("Enter the term count: \n"); scanf("%d",&n);
	float fact=1,x,sum=1;
	printf("Enter the number: \n"); scanf("%f",&x);
	
	for(i=2;i<=n;i++){
		x=pow(x,i-1);
		for(j=2;j<i;j++){
			fact*=j;
		}
		sum+=x/fact;
		
	}
	
	printf("Sum of the series:%f ",sum);
	
	return 0;
}
