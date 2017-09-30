#include <stdio.h>;
#include <math.h>;
#include <conio.h>;
int main ()
{
	float a,b,c,D,t1,t2,x1,x2,x3,x4;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	printf("a,b,c la: %.3f,%.3f,%.3f ",a,b,c);
	D=b*b-4*a*c;
	if (a!=0 && b!=0 && c!=0)
	{
		if (D>0)
		{
			t1 = (-b + sqrt(D))/(2*a);
        	t2 = (-b - sqrt(D))/(2*a);
        	if (t1>0 && t2>0)
        	{ 
			printf("x1 = %f",+sqrt(t1));
            printf("x2 = %f",-sqrt(t1));                      
            printf("x3 = %f",+sqrt(t2));
            printf("x4 = %f",-sqrt(t2));	
        	
        	}
        	else if (t1>0 && t2==0)
        	{
        	printf("x1 = %f",+sqrt(t1));
            printf("x2 = %f",-sqrt(t1));
        	printf("x3 = 0 ");	
        	}
        	else if (t1 >0 && t2 <0)
        	{
        	printf("x1 = %f",+sqrt(t1));
            printf("x2 = %f",-sqrt(t1));
        	}
        	else if (t2>0 && t1<0)
        	{
        	printf("x1 = %f",+sqrt(t2));
            printf("x2 = %f",-sqrt(t2));
        	}
        	else if (t1=0 && t2 >0)
        	{
        	printf("x1 = %f",+sqrt(t2));
            printf("x2 = %f",-sqrt(t2));
            printf("x3 = 0");
        	}
			else if (t1==0 && t2==0)
			{
				printf("x = 0");
			}
			else if (t1<0 && t2<0)
			{
				printf("\npt vo nghiem");
			}
		}
		else if(D==0)
		{
			t1=-b/(2*a);
			if (t1>0) 
			{
			printf("x1 = %f",+sqrt(t1));
            printf("x2 = %f",-sqrt(t1));
			}
			else if (t1==0)
			{
				printf("x1 =0");
			}
			else if (t1<0)
			{
			printf("\npt vo nghiem");
			}
		}
		else if (D<0)
		{
		printf("\npt vo nghiem");
		}
		else if (a!=0 && b!=0 && c==0)
		{
			if ((-b/a)>0)
			{
			printf("x = 0");
			printf("x1 = %f",sqrt(-b/a));
			printf("x1 = %f",-sqrt(-b/a));
			}
			else printf("x = 0");}
			
			
		
		else if (a!=0 && b==0 && c!=0)
		{
			if ((-c/a)>0)
		{	
		printf("x1 = %f",sqrt(sqrt(-c/a)));
        printf("x1 = %f",-sqrt(sqrt(-c/a)));
		}
		else printf("\npt vo nghiem");}
	else if (a==0 && b!=0 && c!=0)
	{
		if ((-c/b)>0)
		{
		printf("x1 = %f",sqrt(-c/b));
        printf("x1 = %f",-sqrt(-c/b));
		}
		else printf("pt vo nghiem");}
	else if ( a == 0 && b == 0 && c == 0 )
	{
		printf("pt vo so nghiem");
	}
	else if ( a == 0 && b == 0 && c != 0 )
	{
		printf("pt vo nghiem");
	}
	else if  (a == 0 && b != 0 && c == 0)
	{
	printf("x= 0");
	}
		else if (a!=0 && b==0 && c==0)
	{
		printf("x= 0");
	}
	
	}
	
	
		
	}
	

	
		
		
		
		

		

	
