#include <stdio.h>

char n = 0;

int main(void)
{

printf ("\r\nn = ");
scanf ("%d", &n);
printf ("\r\n");
if (1 <= n && 12 >= n)
{
	switch (n)
	{
		case 1: printf("Зима\n"); break;
		case 2: printf("Зима\n"); break;
		case 3: printf("Весна\n"); break;
		case 4: printf("Весна\n"); break;
		case 5: printf("Весна\n"); break;
		case 6: printf("Літо\n"); break;
		case 7: printf("Літо\n"); break;
		case 8: printf("Літо\n"); break;
		case 9: printf("Осінь\n"); break;
		case 10: printf("Осінь\n"); break;
		case 11: printf("Осінь\n"); break;
		case 12: printf("Зима\n"); break;
	} 
} else printf("Неправильне введення!!!\n");

    return 0;
}