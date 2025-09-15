#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,diff;
	scanf("%d %d ",&a,&b,&diff);
 diff=abs(a-b);
	if(diff%2==0)
	printf("%d is odd",diff);
	else
	printf("%d is even",diff);
	return 0;
}