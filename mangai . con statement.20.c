#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
printf("%d",n);
if(n%2==0)
printf("even");
else
printf("odd");
return 0;
}