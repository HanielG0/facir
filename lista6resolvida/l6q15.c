#include <stdio.h>
#include <string.h>
void main(){
int n;
char name[50];
printf("DIGITE UMA FRASE TODA EM LETRAS MAISCULAS: ");
gets(name);
for(n=0; n<strlen(name);n++){
if(name[n]>=65 && name[n]<=90)name[n]+=32;    }
printf("sua frase em letras minusculas: %s", name);
}
