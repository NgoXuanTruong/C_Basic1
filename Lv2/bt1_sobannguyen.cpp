#include <stdio.h>;
#include <math.h>;
main ()
{
	float a,b;
	printf("Nhap a: ");
	scanf("%f",&a);
	b=a-0.5;
	if (b==int(b))
	printf("\n so a la so ban nguyen");
	else 
	printf("so a k phai la so ban nguyen");
}
