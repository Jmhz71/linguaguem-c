#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int contador = 0;
  float soma ,nota = 0;

do {

    printf ("digite uma nota:");
    scanf ("%f",&nota);
    soma += nota;
    contador++; 
}while (nota > 0);

printf("media: %f", soma/contador);
    


    return 0;
}
