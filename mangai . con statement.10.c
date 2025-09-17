#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a,&b);
	int sum=a+b;
	scanf("%d",&sum);
	if(sum%2==0)
	printf("even");
	else
	printf("odd");     
	return 0;
	
}