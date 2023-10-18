#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

int i,n;

printf("Digite um número:");
scanf("%d",&n); 

    if (n % 2 == 0) {
printf ("%d é par \n",n);
    }else{
printf ("%d é impar \n",n);
}
return 0;

}
