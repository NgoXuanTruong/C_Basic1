#include <stdio.h>
int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n][n];
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if (a[i][j]%2==0)
				k=k+1;
	printf("tong so chan: %d",k);
}
		
			
