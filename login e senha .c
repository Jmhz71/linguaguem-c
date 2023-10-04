#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {
char loginsalvo [200] = "japa";
char senhasalva[200] = "0510";
char login [200];
char senha [200];

setlocale(LC_ALL,"portuguese");

//solicitando dados
printf ("digite o seu login:");
gets(login);

printf("digite sua senha:");
gets(senha);

if (strcmp(login,loginsalvo) == 0 && strcmp(senha,senhasalva) == 0) {
    printf ("Bem-Vindo");
} else {
    printf ("Acesso negado!");                  
}
    return 0;
}
