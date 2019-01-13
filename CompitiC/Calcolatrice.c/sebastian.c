#include <stdio.h>
#include <stdint.h>

int main(void)
{
float a,b ;
float somma, differenza, prodotto, quoziente; 

printf("Inserisci il primo numero: ");
scanf("%f", &a);

printf("Inserisci il secondo numero: ");
scanf("%f", &b);

somma = a + b;

differenza = a - b;

prodotto = a * b;

quoziente = a / b;

printf("\n");

printf("Numeri inseriti %f e %f\n", a,b);

printf("La somma e' %f\n", somma);

printf("La differenza e' %f\n", differenza);

printf("Il prodotto e' %f\n", prodotto);

printf("La divisione e' %f\n", quoziente);

return 0;


}
