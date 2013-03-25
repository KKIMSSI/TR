#include <stdio.h>

int main()
{
	int iNum = 0;
	int star;
	int n = (iNum*iNum)-(iNum-1);

	printf("°ª³Ö¾îºÁ : ");
	scanf("%d", &iNum);

	for( star=1 ; star <= (iNum*iNum) ; star++)
	{	
		if( star%iNum == 0 || star%iNum == 1 || star <= iNum )
		{
			if( star%iNum == 1 )
			{
				putchar('\n');
			}
			printf("*");
		}
		else
		{
			printf(" ");
		}
		if( star == iNum*(iNum-1)+1)
		{
			for( star ; star < (iNum*iNum)  ; star++)
			{	
				printf("*");
			}
		}
	}
	return 0;
}