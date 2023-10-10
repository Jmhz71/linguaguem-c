#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

int ano,tempotrabalhado,codigo,idade;


printf("Digite seu tempo trabalhado:");
scanf("%d",&tempotrabalhado);

printf("Digite seu ano:");
scanf("%d",&ano);

printf("Digite seu idade:");
scanf("%d",&idade);

printf("Digite seu código:");
scanf("%d",&codigo);

idade = 2023- ano;


system("cls || clear"); 


if (tempotrabalhado >= 30 || idade >= 65) 
{
printf("sua aposentadoria foi aprovada!");
}else {
printf("sua aposentadoria não foi aprovada!");

}
return 0;


}
