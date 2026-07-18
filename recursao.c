//#include <stdio.h>
//
//int fat(int n);
//
//int main(void){
//int p;
//int *z= &p;
//*z=fat(5);
//printf("%d", p);
//
//
//}
//int fat (int n){
//
//if(n==0)
//    return 1;
//
//else
//    return n*fat(n-1);
//
//}

#define PI 3.14159F
#define PROD(a,b)    (a*b)
float area (float r)
{
float a = PI *r^2;
return a ;
}
