#include "problemas.h"
#include "auxiliar.h"
<<<<<<< Updated upstream
#include <time.h>
<<<<<<< HEAD

=======
=======

>>>>>>> Stashed changes
>>>>>>> 8e56474ad4e98b8c4fd58af12881a97e1d2dfb9a
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

void problema18(char *p, int n)
{
    char *t;
    if (n>=1 && n<=factorial(10)){
        t=permutacion(p,n-1,10);
        for (int i=0;t[i]!='\0';i++) p[i]=t[i];

    }
}

long long int problema4(char *c)
{
    long long int *resultado= new long long int[10];
    long long int *acumulador;
    for (int i=0;c[i]!='\0';i++){
        if(c[i]>=48 && c[i]<=57){
            resultado[i] = c[i]-'0';
        }
        else{
            break;
        }
    }
    for (int aux=0; c[aux]!='\0' ;aux++){
        cout << *(resultado+aux);
    }
    cout << endl;
    acumulador = resultado;
    delete[] resultado;
    return *acumulador;
}
void problema5(int num, char *c)
{
    int a, A=0;

    if (num<0){
         c[0]='-';
         num*=-1;
         A++;
     }
    a =num;

    if (a==0) c[0]='0';

<<<<<<< Updated upstream
    while (a>0) {
        a/=10;
        A++;
      }

     for (A--;num>0;num/=10,A--){
         c[A]=num%10+'0';
     }

     cout<<c<<endl;
=======
long long problema9(char *c, long long n)
{
    int E=0,B,A,C;
        int S=0;
        int D=0;
        if (B%A!=0){
            for (D=0;D<B%A;D++){
              //  E=E*10+(C[D]-'0');
            }
            S+=E;
        }
        while(B>D){
            E=0;
            for (int F=A;F>0;F--){
          //      E=E*10+(C[D]-'0');
                D++;
            }
            S+=E;
        }
        cout << "Original: " << C << endl;
        cout << "Suma: " << S << endl;
>>>>>>> Stashed changes
}
void problema7(char *c)

{
    cout<<"Original: "<<c<<endl;

    int contador1=0, contador2=0, contador3=0;
    char caracter;
    for (int i=0; *(c+i)!='\0';i++){
        contador1++;
    }

    char *auxiliar=new char [contador1];

    for (int j=0; *(c+j)!='\0';j++) {
        caracter=*(c+j);

        for (int k=0; *(auxiliar+k)!='\0';k++) {
            if (caracter== *(auxiliar+k))contador2++;
        }

<<<<<<< Updated upstream
        if (contador2==0){
            auxiliar[contador3]=caracter;
            auxiliar[contador3+1]='\0';
            contador3++;
        }

        else contador2=0;
        }

    cout<<"Sin repetidos: "<< auxiliar<<endl;
    delete[]auxiliar;
=======
      //  return P[15][20];
>>>>>>> Stashed changes
}
void problema11(char c, char *c2)
{
    static char cine[16][42];
    int fila,columna;
    static bool f=false;
    if (!f){
        for (int f=0;f<16;f++){
             for (int c=0;c<42;c++){
                 if (f==0) cine[f][c]=' ';
                 else{
                     if (c==0) cine[f][c]=char(f+64);
                     else if (c%2==0) cine[f][c]='-';
                     else cine[f][c]=' ';
                 }
                 if (c==41)cine[f][c]='\0';
             }
        }
        f=true;
    }
    fila=int (c2[0]-64);
    columna =2*(int(c2[1])-48);
    if (c=='I') cine[fila][columna]='+';
    else if (c=='C') cine[fila][columna]='-';

    for(int i=0; i<16;i++) cout<< cine[i]<<endl<<endl;
}
void problema2()
{
    int  aleatorio, Cont_igual=0;
    char AZ[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char arreglo[200]={};
    char mayuscula = 'A', acumulador;
    srand(time(NULL));


    for(int j=0;j<200;j++){
        aleatorio = rand()%26;
        acumulador = aleatorio + mayuscula;
        arreglo[j] = acumulador;
        cout << arreglo[j];
    }
    cout << endl;
    for(int x=0;x<26;x++){
        cout<<AZ[x]<<": ";
        Cont_igual=0;
        for(int z=0;z<200;z++){
            if(AZ[x]==arreglo[z]){
                Cont_igual++;
            }
        }
        cout<<Cont_igual<<endl;
    }
}
<<<<<<< HEAD
void problema15(int l_A[4], int l_B[4]){

    int l_C[4];

        if (l_A[0]<l_B[0]){
            if (l_B[0]<l_A[0]+l_A[2]){
                l_C[0]=l_B[0];

                if (l_A[0]+l_A[2]<l_B[0]+l_B[2]) l_C[2]=(l_A[2]+l_A[0])-l_B[0];

                else l_C[2]=l_B[2];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }
        else{
            if (l_A[0]<l_B[0]+l_B[2]){
                l_C[0]=l_A[0];

                if (l_B[0]+l_B[2]<l_A[0]+l_A[2]) l_C[2]=(l_B[2]+l_B[0])-l_A[0];

                else l_C[2]=l_A[2];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }

        if (l_A[1]<l_B[1]){
            if (l_B[1]-l_B[3]<l_A[1]){
                l_C[1]=l_A[1];

                if (l_A[1]-l_A[3]<l_B[1]-l_B[3]) l_C[3]=l_A[1]-(l_B[1]-l_B[3]);

                else l_C[3]=l_A[3];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }

        else{
            if (l_A[1]-l_A[3]<l_B[1]){
                l_C[1]=l_B[1];

                if (l_B[1]-l_B[3]<l_A[1]-l_A[3]) l_C[3]=l_B[1]-(l_A[1]-l_A[3]);

                else l_C[3]=l_B[3];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }

    //Mostrar nuevo arreglo

    cout <<"\n \n" << "El nuevo arreglo es: {";

    for (int A=0;A<4;A++){
        cout << l_C[A];
        if (A<3) cout << ", ";
    }

    cout << "}" << endl;
}

=======

void problema14()
{
    int **matriz =  new int*[5];
    for (int i=0;i<5;i++) *(matriz+i)= new int [5];

    for (int f=0;f<5;f++) for (int c=0;c<5;c++) matriz[f][c]=1+c+5*f;

    for (int i=0; i<4;i++){
       cout<< "Matriz rotada "<<90*i<< " grados" <<endl;
      imprimir_matriz(matriz);
       cout<<endl<<endl;
       rotar90(matriz);
    }

    delete []matriz;

}
>>>>>>> 8e56474ad4e98b8c4fd58af12881a97e1d2dfb9a

