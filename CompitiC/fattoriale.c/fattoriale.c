#include <stdio.h>
#include <stdint.h>

int main()
{
int num;
int i;

printf("Inserisci il numero: ");
scanf("%d",&num);

while(num<1||num>10)
{
printf("ERRORE, REINSERISCI");
scanf("%d",&num);
}

printf("Il numero inserito e' %d\n",num);

i=1;
while(i<=10)
{
printf("%d\t%d\n",i,num*i);

i++;
}

return 0;
}
