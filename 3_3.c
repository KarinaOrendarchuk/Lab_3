#include <stdio.h>
#include <math.h>

double x = 0;
double y = 0;
double f = 0;

int main(void)
{
  
printf("x = ");
scanf("%lf", &x);

printf("y = ");
scanf("%lf", &y);


  double a1 = pow(x,2);
  double a2 = x*y;
  double a3 = pow(y,2);
  double a4 = a1+a2-a3;
  double a5 = 1+a1+a3;
  double a6 = a4/a5;

  if (a6 == 0)
  {
   printf("Для заданих значень y та z у обчислюваному виразі виконується ділення на 0");
  }else printf("\nf = %f\n", a6);

  return 0;
}
