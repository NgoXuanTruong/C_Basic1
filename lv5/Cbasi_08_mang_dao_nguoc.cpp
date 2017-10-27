#include <stdio.h>
int main()
{
	int n;
	int a[4][5];
	int i,j;

	for(i=0;i<=4;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<=4;i++)
		{
		for(j=0;j<=5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
		}
	printf("ma tran dao nguoc");
	for(j=0;j<=5;j++)
	{
		for(i=0;i<=4;i++)
		printf("%d ",a[j][i]);
		printf("\n");
		}
}
		
		
	
