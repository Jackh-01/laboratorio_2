#include "auxiliar.h"

int recursiva(int fnodo, int cnodo, int v, int nodos)
{

    bool caminos[2];
    caminos[0]=(cnodo<v-1);
    caminos[1]=(fnodo<v-1);
    if(fnodo==v-1 && cnodo==v-1) nodos++;
    if(caminos[0]){
        nodos= recursiva(fnodo,cnodo+1,v,nodos);
        caminos[0]=false;
    }
    if (caminos[1]){
        nodos= recursiva(fnodo+1,cnodo,v,nodos);
        caminos[1]=false;
    }
    return nodos;
}

bool amigable(int n)
{
    int sum1=0, sum2=0;
    for(int i=1;i<=(n/2);i++) if(n%i==0) sum1+=i;
    for(int i=1;i<=(sum1/2);i++) if(sum1%i==0) sum2+=i;
    return (sum2==n && n!=sum1);
}

int factorial(int fact)
{
    int fac=1;
        for (;fact>=1;fact--) fac*=fact;
        return fac;
}

char * permutacion(char *c, int n, int tam)
{
    int fact, seccion;
    char *permuta=new char[tam+1];
    permuta[tam]='\0';
    for (;tam>0;tam--){
        fact=factorial(tam-1);
        seccion=n/fact;
        permuta[10-tam]=c[seccion];
        for (int i=seccion;i<tam;i++) c[i]=c[i+1];
        n%=fact;

    }
    return permuta;
}

void rotar90(int **matriz)
{
    int m[5][5];

    for (int f=0;f<5;f++){
        for (int c=0;c<5;c++) m[f][c]=matriz[f][c];
         }
    for (int f=0;f<5;f++){
        for (int c=0;c<5;c++) matriz[c][4-f]=m[f][c];
         }
}

void imprimir_matriz(int **matriz)
{
    for (int f=0;f<5;f++){
        for (int c=0;c<5;c++) cout<< matriz [f][c]<< '\t';
        cout << endl<< endl;

    }
}
