#include "problemas.h"

bool problema3(char *c1, char *c2){
    bool salida= true;
    if(longitud(c1)!=longitud(c2)) salida=false;
    else{
        for(int i=0;*(c1+i)!='\0';i++){
            if(c1[i]!=c2[i]){
                salida=false;
                break;
            }
        }
    }
    return salida;
}
int longitud(char *c){
    int i=0;
    for(;*(c+i)!='\0';i++)
    return i+1;

}

int problema13(int *mat)
{
    int estr=0,matriz[6][8];
    float logica;
    for (int f=0,i=0;f<6;f++)for(int c=0;c<8;c++,i++) matriz[f][c]=*(mat+i);
    for(int f=1;f<5;f++){
        for(int c=1;c<7;c++){
            logica=(matriz[f][c]+matriz[f][c-1]+matriz[f][c+1]+matriz[f-1][c]+matriz[f+1][c])/float(5);
            if (logica>6) estr++;

        }
    }
    return estr;
}
