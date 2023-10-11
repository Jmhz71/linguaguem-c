#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

char sexo,m,f;
float altura,peso;

printf("digite seu sexo:");
scanf("%c",&sexo);

printf("digite sua altura:");
scanf("%f",&altura);

switch (sexo){ 

    case 'm' :
    case 'M' :
    peso = (72.7 * altura) - 58;
    break;

    case 'F':
    peso = (62.1 * altura) - 44.7;
    break;

default:
printf("opcao invalida");
}
printf("seu peso ideal e: %.2f \n",peso);

return 0;

}
