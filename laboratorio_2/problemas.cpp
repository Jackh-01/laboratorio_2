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
    //Ciclo que convierte la cadena de caractere(números) en enteros
    for (int i=0;c[i]!='\0';i++){
        if(c[i]>=48 && c[i]<=57){
            resultado[i] = c[i]-'0';
            // Hasta aquí genero el arreglo con numeros enteros
        }
        else{
            break;
        }
    }
    for (int aux=0; c[aux]!='\0' ;aux++){ // Con este for recorro la cadena ya en entero y la
        cout << *(resultado+aux);
    }
    cout << endl;
   //Ahora llevo el arreglo de enteros a una variable que contenga el resultado en entero
    acumulador = resultado;
    //cout << &acumulador;
    delete[] resultado;
    return *acumulador;
}
void problema5(int num, char *c)
{
    int a, A=0;  //longitud

    if (num<0){  // agregar al str la posicion del menos si el numero es negativo
         c[0]='-';
         num*=-1; //convertirlo a positivo
         A++;
     }
    a =num;

    if (a==0) c[0]='0';

    while (a>0) {
        a/=10;     //division entera para saber cuantos digitos tiene
        A++;      //crear tamano del str
      }

     for (A--;num>0;num/=10,A--){ //ultima posicion
         c[A]=num%10+'0';  //reconstruir el numero, solo una posicion
     }

     cout<<c<<endl;
}
void problema7(char *c)
//Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.

{
    cout<<"Original: "<<c<<endl;

    int contador1=0, contador2=0, contador3=0; //inicializar variables
    char caracter;
    for (int i=0; *(c+i)!='\0';i++){
        contador1++; //se calcula la longitus de la cadena
    }

    char *auxiliar=new char [contador1]; //asignar memoria para "auxiliar" de igual tamano que la cadena ingresada

    for (int j=0; *(c+j)!='\0';j++) {
        caracter=*(c+j); //almacenar el valor de la cadena en el momento en la variable caracter

        for (int k=0; *(auxiliar+k)!='\0';k++) {
            if (caracter== *(auxiliar+k))contador2++; //se compara el caracter con lo almacenado en el arreglo "auxiliar"
        }

        if (contador2==0){
            auxiliar[contador3]=caracter; //se agrega el elemento si no esta repetido
            auxiliar[contador3+1]='\0';
            contador3++;
        }

        else contador2=0; //se reinicia el contador si el elemento esta repetido
        }

    cout<<"Sin repetidos: "<< auxiliar<<endl;
    delete[]auxiliar;// se libera memoria
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
