#include "L2.h"

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
