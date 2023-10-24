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
printf("Digite a primeira  nota:");
scanf("%f",&nota);
}while (nota < 0 || nota > 10);

do{
printf("Digite a segunda nota:");
scanf("%f",&nota);
}while (nota< 0 || nota > 10);

do{
printf("Digite a terceira nota:");
scanf("%f",&nota);
}while (nota < 0 || nota > 10);

soma += nota;

}

media = soma /i;

printf("media :%.1f\n",media);

if(media>=7){
    printf("Aprovado");
} else if (media >= 5) {
    printf("Recuperação");
} else {
    printf ("Reprovado");
}



return 0;

}
