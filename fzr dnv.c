#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char login;
    char loginsalvo [200] = "japa";
    char senhasalva [200] = "0510";
    char senha;
    
    do
    {
      printf ("Digite seu login:");
       scanf("%c",&login);
      fflush(stdin);
      printf ("Digite sua senha:");
      scanf("%c",&senha);

      if (strcmp(login,loginsalvo) == 0 && strcmp(senha,senhasalva) == 0) {
        printf ("BEM VINDO MEU PVT");
      }else{
        printf("VOCÊ É VACILÃO");
      }

    } while (login = senha == 0);



    return 0;
}
