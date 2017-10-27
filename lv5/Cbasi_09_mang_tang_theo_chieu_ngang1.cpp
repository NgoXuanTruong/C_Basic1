#include <stdio.h>;
#include <conio.h>;
int main ()
{
	int a[5][5],i,j;
	
	
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
			{a[i][j]=1+a[i][j];
			printf("%d\t",a[i][j]);}
	printf("\n");
}
}
