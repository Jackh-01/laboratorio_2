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


int problema1(int valor_moneda, int valor_ingresado, int n_billetes)
{
    for (; valor_ingresado >= valor_moneda ; n_billetes += 1){
            valor_ingresado -= valor_moneda;
        }
        cout << valor_moneda << ": " << n_billetes << endl;
        return valor_ingresado;
}

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
}


void problema5(int A, char *c)
{
    int B, C;
        C=A;
        for(B=0;C!=0;B++){
            C=C/10;
        }
        char n_cad[B];
        n_cad[B]='\0';
        while (A!=0){
            n_cad[B-1]=(A%10)+'0';
            A/=10;
            B-=1;
        }
        cout << n_cad << endl;
}


void problema7(char *c)
{
    int A;
    char *cad = new char[A+1];
        cad[A]='\0';
        //fflush(stdin);
        cout << "Ingrese la cadena: ";
        cin >> cad;
        int k=0;
        char *no_rep = new char[A+1];
        no_rep[0]='\0';
        for(int i=0;cad[i]!='\0';i++){
            for(k=0;no_rep[k]!=cad[i] && no_rep[k]!='\0';k++);
            if(no_rep[k]=='\0'){
                no_rep[k]=cad[i];
                cout << cad[i];
            }
        }
        cout << endl;
        delete[] no_rep;
}

long long problema9(char *c, long long n)
{
    int E=0,B,A,C;
        int S=0;
        int D=0;
        if (B%A!=0){
            for (D=0;D<B%A;D++){
                E=E*10+(C[D]-'0');
            }
            S+=E;
        }
        while(B>D){
            E=0;
            for (int F=A;F>0;F--){
                E=E*10+(C[D]-'0');
                D++;
            }
            S+=E;
        }
        cout << "Original: " << C << endl;
        cout << "Suma: " << S << endl;
}

void problema11(char P[15][20])
{
    int A;
        char B;

        cout << "Ingresar la letra de la fila donde se encuentra el asiento (Tiene que ser mayuscula): ";
        cin >> B;
        cout << "Ingresar el numero donde se encuentra el asiento: ";
        cin >> A;

        if (B<65 or B>79) cout << "No ingreso una letra del rango disponible" << endl;

        else if (A<1 or A>20) cout << "No ingreso un numero del rango disponible" << endl;

        else {
            cout << P[int (B)-65][A] << endl;
            if (P[int (B)-65][A-1]=='-') P[int (B)-65][A-1]='+';
            else P[B-65][A-1]='-';
        }

        return P[15][20];
}

void problema18(char *p, int n)
{
    char *t;
    if (n>=1 && n<=factorial(10)){
        t=permutacion(p,n-1,10);
        for (int i=0;t[i]!='\0';i++) p[i]=t[i];

    }
}
