#include<stdio.h>
int main()
{
	int numa,numb;
	scanf("%d %d",&numa,&numb);
	int lastdigita,lastdigitb;
	lastdigita=numa%10;
	lastdigitb=numb%10;

	if(lastdigita=lastdigitb)
	{
		printf("it is same");
	}
else{
	printf("it is diffrent");
}
	return 0;
}