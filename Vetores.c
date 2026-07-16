#include <stdio.h>

int main (void){
float v[10];
float med, var;
int i;
for (i=0; i<10; i++)
    scanf("%f", &v[i]);

med = 0.0f;

for (i=0; i<10; i++)
    med = med + v[i];

med = med /10;

var = 0.0f;

for (i=0; i<10; i++)
    var = var +(v[i]-med)*(v[i]-med);

var = var/10;

printf("media = %f  , variancia = %f ", med, var);





return 0;
}
