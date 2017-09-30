#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float a,b,c,D,x1,x2;
	printf("Nhap a : ");
	scanf("%f",&a);
	printf("\n Nhap b : ");
	scanf("%f",&b);
	printf("\n Nhap c : ");
	scanf("%f",&c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0) 
			printf("\n Phuong trinh vo so nghiem");
			else 
			printf("\n Phuong trinh vo nghiem");
		}
		else
		{
			x1=-b/c;
			printf("\n Phuong trinh co 1 nghiem:%f",x1);
		}
	}
	else
	{
		D=b*b-4*a*c ;
		if (D<0) printf("Phuong trinh vo nghiem");
		if (D==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh da nghiem kep:%f",x1);
		}
		if (D>0)
		{
			x1=(-b+sqrt(D))/(2*a);
			x2=(-b-sqrt(D))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet");
			printf("%f",x1);
			printf("%f",x2);
		}
	}
}
