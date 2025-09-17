#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%3==0 || num%7==0) 
	{
		printf("it is divisible");
	}
else{
	printf("it is not divisible");
}
	return 0;
}
// |->bitwise OR -> number ->20
// ||->Logical OR -> 0- 1