
#include <stdio.h>
int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n][n];
	int i,j,k;
	printf("nhap k: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
			for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{
			if (a[i][j]%k==0)
			printf("\nso chia het cho k la: %d",a[i][j]);
			}
		}
