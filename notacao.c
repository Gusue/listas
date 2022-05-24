
//Notação Científica


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
   char nome[70];
   int i=0,j=0,tam,espaco[10],past,name,miz,ult;
   
   
   printf("INSIRA SEU NOME: \n");
   scanf("%[^\n]s",nome);
   
   tam = strlen(nome);

   while( tam > i) {
       if (nome[i] == ' ' ){
           espaco[j] = i;
           j++;
       }
       i++;
        
   }
   j--;
    past = j;
    name = espaco[past]+1;

    while (name <= tam){
        printf("%c",toupper(nome[name]));
        past++;
        name++;
        ult++;
    }
    j--;
    tam = tam-ult;
    tam = tam-1;
    i=0;
    printf(",%c",nome[0]);
    past = j;
    j = 0;
   while (j<= past){
       miz = espaco[j]+1;
       printf(".%c",nome[miz]);
       j++;


   }
   
   return(0);
}