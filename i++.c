#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

setlocale(LC_ALL,"portuguese");

int i;
int n;

printf (" digite o número da tabuada:");
 scanf ("%d",&n); 

for (i = 1; i <= 10; i++){
printf ("\t3 x %d = %d \n",i, n * i);
}
printf("\n;");
for (i = 1; i <= 10; i++){
printf ("\t5 x %d = %d \n",i, n * i);
}
printf("\n;");
for (i = 1; i <= 10; i++){
printf ("\t7 x %d = %d \n",i, n * i);
}
printf("\n;");
return 0;
}
