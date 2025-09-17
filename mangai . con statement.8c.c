#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int lastdigit=num%10;
	if(lastdigit%3==0)
	{
		printf("The last digit is divisible by 3");
	}
	else
	printf("the last digit is not divisible by 3");
	return 0;
}