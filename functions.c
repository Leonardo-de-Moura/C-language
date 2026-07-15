#include <stdio.h>

void fat(int n);

int main(void){
int n;
printf("digite o número");
scanf("%d", &n);
fat(n);




return 0;
}

void fat(int n){
int i;
int f=1;
for (i=1; i<=n; i++)
    f*=i;
return f;

}
