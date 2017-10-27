#include <stdio.h>
int main()
{
	int n,k,i,j,SNT;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
			for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for (k=2;k<=a[i][j];k++)
			{
				if (a[i][j]%k!=0)
				SNT=k;
				
				
			}
		printf("SNT: %d",a[i][j]); 
}
