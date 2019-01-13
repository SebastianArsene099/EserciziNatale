#include <stdio.h>
#include <stdint.h>

int main(void)
{
int a,b ;
int c;
int d;
printf("Immetti A: ");
scanf("%d", &a);


printf("Immetti B: ");
scanf("%d", &b);
//verifica se A e' positivo o negativo//
if (a >= 0)
{
	printf("A e' positivo\n");
}
else 
{
	printf("A e' negativo");
}

//verifica se B e' pari o dispari//
if(b%2 == 0)
{
	printf("B e' pari\n");
}
else
{
	printf("B e' dispari\n");
}

//somma di A+B//
c= a + b;
printf("La somma di %d e %d e' %d\n", a,b,c);

//somma dei valori assoluti di A+B//

if (a < 0)
{
a=-a;
}
printf ("il valore assoluto del primo numero inserito e' %d\n", a);


if (b < 0)
{
b=-b;
}
printf("Il valore assoluto del secondo numero inserito e' %d\n", b);

d= a + b;

printf("La somma dei valori assoluti di %d e %d e' %d", a,b,d);

return 0;
}	
