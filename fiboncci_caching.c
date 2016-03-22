#include <stdio.h>
#define UNKNOWN -1
int fib[50];
int fiboncci(int n);
int main(){
	int n,i;
	printf("\nEnter a number to compute fiboncci : ");
	scanf("%d",&n);
	fib[0]=0;
	fib[1]=1;
	for (i = 2; i <= n; i++)
	{
		fib[i]=-1;
	}
	
	printf("\nThe %d fiboncci number is :%d",n,fiboncci(n));

	return 0;
}
int fiboncci(int n){
	printf("fiboncci\n");
	if (fib[n]==-1)fib[n]=fiboncci(n-1)+fiboncci(n-2);
	return fib[n];
}