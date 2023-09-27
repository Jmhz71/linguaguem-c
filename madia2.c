#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main () {
float n1;

setlocale(LC_ALL,"portuguese");

printf("Digite um numero.\n");
scanf ("%f" ,&n1);

if (n1 == 10)
{
    printf("seu numero é igual a 10");
}
else
{
if (n1 > 10)
{
    printf ("seu numero é maior ");
}
else
printf ("seu numero não é maior que 10 ");
}

return 0;
}
