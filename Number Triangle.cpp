/*Number Triangle*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,k,l,n;
	system("cls");
	printf("Enter the Range:	");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(i=i-1;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}
