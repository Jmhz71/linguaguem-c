#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

float nota;
float media;
int soma,i;


for ( i = 0; i < 2; i++)
{

do{
printf("Digite uma nota:");
scanf("%f",&nota);
}while (nota < 0 || nota > 10);

soma += nota;

}

media = soma /i;


printf("nota  :%.2f\n",nota); 
printf("media :%.2f\n",media);


return 0;

}
