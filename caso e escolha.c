#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

int dia;


printf("digite o dia:");
scanf("%d",&dia);


switch (dia)
{
    case 1 :
    printf ("segunda");
    break;

    case 2 :
    printf ("terça");
    break;

    case 3 :
    printf ("quarta");
    break;

    case 4 :
    printf ("quinta");
    break;

    case 5:
    printf ("sexta");
    break;

    case 6 :
    printf ("sabado");
    break;

    case 7 :
    printf ("domingo");
    break;
    

}



return 0;


}


