#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

int codigo;


printf ("------------------MENU--------------------\n");
printf ("\n");
printf ("1 | Picanha          |R$ 25,00\n");
printf ("2 | Lasanha          |R$ 20,00\n");
printf ("3 | strgonoff        |R$ 18,00\n");
printf ("4 | Bife acebolado   |R$ 55,00\n");
printf ("5 | pão com ovo      |R$  5,00\n");
printf ("\n");
printf ("----------------------FIM-------------------\n");
printf ("\n");
printf("Digite o código do prato:");
scanf ("%d",&codigo);

system("cls || clear"); 

switch (codigo){

    case 1 :
    printf ("1 | Picanha |R$ 25,00");
    break;

    case 2 :
    printf ("2 | Lasanha |R$ 20,00");
    break;

    case 3 :
    printf ("3 | strgonof |R$ 18,00");
    break;

    case 4 :
    printf ("4 | Bife acebolado |R$ 55,00");
    break;

    case 5:
    printf ("5 | pão com ovo |R$  5,00");
    break;
    
     default:
    printf("Iválido!!");
}
    return 0;

}
