#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main () {
    
    int n1;
    int n2;
    float media;
    int soma;
    int maior;
    int menor;
    int produto;

    setlocale(LC_ALL,"portuguese");
    
    printf("digite o primeiro número:\n");
    scanf("%i",&n1);
    
    printf("digite o segundo número:\n");
    scanf("%i",&n2);

    soma = n1 + n2;
    produto = n1 * n2;
    media = soma / 2.0;

if (n1 > n2) {
   maior = n1;
   menor = n2;
   } else {
   maior = n2;
   menor = n1;
}

 printf ("n1: %i \n" ,n1);
 printf ("n2: %i \n" ,n2);
 printf ("media: %.1f \n",media);
 printf ("soma: %i \n",soma);
 printf ("produto: %i \n",produto);
 printf ("maior: %i \n",maior);
 printf ("menor: %i \n",menor);



 


 

    return 0;
}
