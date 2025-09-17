#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int firstdigit=num/10;
	if(firstdigit%3==0)
	{
		printf("The first digit is divisible by 3");
	}
	else
	printf("the first digit is not divisible by 3");
	return 0;
}