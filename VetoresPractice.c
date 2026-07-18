#include <stdio.h>
#include <stdlib.h>

int main( void ){
int n;
printf("digite o tamanho do vetor");
scanf("%d", &n);
int* v;
v= (int *) calloc(n,sizeof(int));

printf("v: %d", *v);
free(v);



return 0;}
