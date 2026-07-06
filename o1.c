#include <stdio.h>

int fatorial(int n);

int main(){
int n;
scanf("%d", &n);
int z=fatorial(n);
printf("este é o fatorial %d",z);


return 0;
}

int fatorial(int n){
    int f =1;

    while(n>1){
        f*=n;
        n--;
}
    return f;
};




