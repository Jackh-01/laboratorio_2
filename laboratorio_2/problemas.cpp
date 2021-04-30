#include "problemas.h"
#include "auxiliar.h"
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

int problema16(int n)
{
    int caminos;
    caminos=recursiva(0,0,n+1,0);
    return caminos;
}

int problema17(int num)
{
    int suma=0;
    for(;num>1;num--) if(amigable(num)) suma+=num;
    return suma;
}



int problema10(char *c)
{
    int total=0, valor=0, valor_ant;
    for(int i=0;c[i]!='\0';i++){
        valor_ant=valor;
        switch (c[i]) {
            case 'N': valor=1000; break;
            case 'D': valor=500; break;
            case 'C': valor=100; break;
            case 'L': valor=50; break;
            case 'X': valor=10; break;
            case 'V': valor=5; break;
            case 'I': valor=1; break;
            default: valor=-100000; break;
        }
        if(i==0) total=valor;
        else{
            if(valor_ant>valor) total+=valor;
            else total-=valor;

        }
    }
    return total;
}

<<<<<<< HEAD
int problema1(int valor_moneda, int valor_ingresado, int n_billetes)
{
    for (; valor_ingresado >= valor_moneda ; n_billetes += 1){
            valor_ingresado -= valor_moneda;
        }
        cout << valor_moneda << ": " << n_billetes << endl;
        return valor_ingresado;
=======
char * problema6(char *c)
{
    for (int i=0; *(c+i)!= '\0'; i++){
        if (*(c+i)>=97 && *(c+i)<=122) *(c+i)-=32;
    }
    return c;
}

void problema8(char *c1)
{
    int j=0, k=0;
    char num[1000], letra[1000];
    for (int i=0; *(c1+i)!='\0';i++){
        if(*(c1+i)>=48 && *(c1+i)<=57){
            num[j]=*(c1+i);
            j++;
        }
        else{
            letra[k]=*(c1+i);
            k++;
        }
    }
    num[j]='\0';
    letra[k]='\0';
    cout<<"Original: "<<c1<<endl;
    cout<<"Texto: "<<letra<<'\n'<<"Numeros: "<<num<<endl;

>>>>>>> 0a89ce53369dbd9281ef6b05c294fba3e2c58bcb
}
