#include <stdio.h>
#include <stdlib.h>



int main () {


float n1;
float n2;
float media;

printf("Digite a primeira nota:");
scanf("%f",&n1);

printf("Digite a segundo nota:");
scanf("%f",&n2);


//calculo 

media = n1 +n2 /2;

system("cls || clear"); // LImpa terminal

printf ("n1: %2f \n""" ,n1);
printf ("n2: %2f \n" ,n2);
printf ("media: %2f\n",media);

//condicional: se-senão.

if(media>=7)
{
    printf("Aprovado");

}
else
{
    printf ("Reprovado");

}
return 0;
}
