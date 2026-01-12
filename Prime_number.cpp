#include<stdio.h>
void prime();
int main()
{
	printf("Prime NUmber Calculate :\n");
	prime();
	return 0;
}
void prime()
{
	int num,i;
	printf("\nEnter a number (No -ve num and 0) : ");
	scanf("%d",&num);
	if(num==1 or num==2)
		{
			printf("Prime number");
		}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				printf("Not Prime number");
				break;
			}
			else
			{
				printf("Prime number");
				break;
			}
		}
	}
}
