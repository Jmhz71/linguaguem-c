#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

float n1,n2;
float media;


do{
printf("Digite a primeira nota:");
scanf("%f",&n1);
}while (n1 < 0 || n1 > 10);


do{
printf("Digite a segunda nota:");
scanf("%f",&n2);
}while (n2< 0 || n2 > 10);

media = (n1 + n2 ) /2;

printf("nota 1 :%.2f\n",n1);
printf("nota 2 :%.2f\n",n2); 
printf("media :%.2f\n",media);


return 0;

}
