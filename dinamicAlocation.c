#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v)
{
    int i;
    float s = 0.0f;
    for (i = 0; i < n; i++)
        s += v[i];

    return s / n;
}

float variancia(int n, float *v, float m)
{

    int i;
    float s = 0.0f;
    for (i = 0; i < n; i++)
        s += (v[i] - m) * (v[i] - m);
    return s / n;
}

int main (void){
	int i,n;
	float *v;
	float med,var;

	scanf("%d", &n);
	v= (float *)/*casting de tipo*/ malloc(n*sizeof(float));
	if(v==NULL){
		printf("memoria insufuciente");
		return 1;
	}
	for (i=0; i<n; i++)
		scanf("%f", &v[i]);

	med= media(n,v);
	var= variancia(n,v,med);
	printf("media = %f variancia = %f", med, var);
	free(v);
	return 0;
}