#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if((num%2==0) && (num%5==0) && (num%8!=0))
	{
		printf("it is divisible");
	}
else{
	printf("it is not divisible");
}
	return 0;
}