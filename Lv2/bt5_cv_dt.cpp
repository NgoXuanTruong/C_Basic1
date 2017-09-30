#include <stdio.h>;
#include <math.h>;
#define PI 3.14
main ()
{
	int x;
	float a,b,c,p,C,S;
	printf("moi ban nhap so: ");
	scanf("%d",&x);
	if (x==1)
	{
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	printf("\nba canh tam giac la: %.3f,%.3f,%.3f",a,b,c);
	p=(a+b+c)/2;
	C=p*2;
	S=(p*(p-a)*(p-b)*(p-c));
	printf("\nchu vi tam giac la: %.3f",C);
	printf("\nDien tich tam giac la: %.3f",S);
	}
	if (x==2)
	{
	printf("canh cua hinh vuong la: ");
	scanf("%f",&a);
	printf("\nChu vi: %.3f",a*4);
	printf("\ndien tich: %.3f",a*a);
	}
	if (x==3)
	{
	printf("\nchieu dai: ");
	scanf("%f",&a);
	printf("\nchieu rong: ");
	scanf("%f",&b);
	printf("\nChu vi: %.3f",(a+b)*2);
	printf("\nDien tich: %.3f",a*b);
	}
	if (x==4)
	{
	printf("ban kinh hinh tron: ");
	scanf("%f",&a);
	printf("\nChu vi: %.3f",2*PI*a);
	printf("\nDien tich: %.3f",PI*a*a);
	}
	
	
	 
}
