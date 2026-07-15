#include <stdio.h>

int fat(int n);

int main(void){
int p;
int *z= &p;
*z=fat(5);
printf("%d", p);


}
int fat (int n){

if(n==0)
    return 1;

else
    return n*fat(n-1);

}
