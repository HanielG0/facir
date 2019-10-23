#include <stdio.h>
int main(){
char name[50];
int n;
printf("digite uma sequencia de numeros com 0 e 1: ");
gets(name);
for (n=0;name[n]!='\0';n++){
if(name[n]=='0'){
name[n]='1';
}
}
printf("%s",name);
}
