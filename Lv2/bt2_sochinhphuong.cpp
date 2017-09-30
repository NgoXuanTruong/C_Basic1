#include <stdio.h>;
#include <math.h>;
main ()
{
	float a,b;
	printf("moi ban nhap so a ");
	scanf("%f",&a);
	if (a<=0)
	printf("a khong phai la so chinh phuong");
	else
		{
			b=sqrt(a);
			if(a==int(b)*int(b))
			printf("a la so chinh phuong");
			else 
			printf("a khong la so chinh phuong");
		}
}
