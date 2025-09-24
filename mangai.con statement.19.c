#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int product;
	product=a*b;
	printf("%d",product);
	if(product<0)
	{
		printf("it is negative ");
	}
	else if (product==0){
		printf("not positive and not negative");
	}
	else if(product>0){	
		printf("it is positive ");}
		else{
			printf("0");
		}
	
return 0;
}