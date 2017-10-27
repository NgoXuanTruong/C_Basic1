
#include <stdio.h>
int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n][n];
	int i,j;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
		}
}
	
