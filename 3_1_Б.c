#include <stdio.h>
#include <math.h>
int main()
{
int a,c,b,y;
printf("введіть точку a=");
scanf("%d",&a);
printf("введіть точку c=");
scanf("%d",&c);
printf("введіть точку b=");
scanf("%d",&b);
if(c>0)
{
	y = sqrt(b-(2*a))+2*(sqrt(c));
	printf("%d виконується перша умова", y);
}
	else if(c==0)
	{
		y =  b/(c-6*a);
		printf("%d виконується друга умова", y);
	}
		else if  (c<0)
		{
		     y = b+12*pow(c,3);
		     printf("%d виконується третя умова", y);
		}
    return 0;
}
