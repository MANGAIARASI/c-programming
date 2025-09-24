#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(10>num)
	{
	printf("single digit");
}
	else if(100>num)
	{
printf("double digit");	
}
else if(1000>num)
{
printf("three digit");
}
else
{
	printf("zero");
}
return 0;
}