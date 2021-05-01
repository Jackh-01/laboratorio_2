#include "problemas.h"

int main()
{
    char c1[]="hola", c2[]="hola", c[]="123";
    char letra, salir, T[15][20];
    int menu, A, B, i, j;
    bool res;
    cout << "ingrese el programa a realizar: ";
    cin>>menu;

    switch (menu) {
        case 1:{
        cout <<"Para conocer que cantidad de las nomicaciones definida le entregaria un cajero\n\nIngresar el valor: ";
        cin >> A;
        for(B=50000;B>=50;B=B/2){
            if(B/1000==25 or B/100==25 or B/10==25) B=B-(B/5);
            A=problema1(B, A);
        }
        if(A < B) cout << "Faltante: " << A << endl;
        break;
        }
        case 3:{
            res= problema3(&c1[0], c2);
            cout<<res<<endl;        
            break;
            }

        case 5:{
        cout << "ingrese un numero entero: ";
                        cin >> A;
                   cout<<A;
                    break;
                }
        case 6:{
            char cadena[]="Hola!", *salida;
            salida= problema6(cadena);
            cout<< salida<< endl;
            break;
            }

        case 7:{
            cout << "Ingrese la longitud de la cadena: ";
            cin >> A;
            break;
            }
       case 8: {
            char cadena[]="abcdefghijk123lmno456pqr789stuvwxyz";
            problema8(cadena);
            break;
            }

        case 10:{
            char num[]="DC";
            cout<<problema10(num)<<endl;
        break;
        }
    case 11:{
        for(salir='s';salir!='n';){
           //Mostrar La tabla
           letra=65;
           cout << "\n \n";
           cout << "   1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 " << endl;
               for (i=0;i<15;i++){
                    cout << letra << "  ";
                    letra+=1;
                    for (j=0;j<20;j++) cout << T[i][j] << "  ";
                    cout << endl;
               }
                        cout << "ingresar s si quiere cambiar un asiento o n si quiere salir: ";
                        cin >> salir;
                        if (salir=='s'){
                            T[15][20];
                        }

                        else if (salir!='n') cout << "Debe de poner s o n minusculas" << endl;
                    }
                    break;
                }
        case 17:{
            int num=284;
            cout<<problema17(num)<<endl;
            break;
        }
        case 16:{
            int caminos;
            caminos=problema16(2);
            cout<<"el total de caminos es:"<<caminos<<endl;
            break;
       }
       case 13:{
            int total, mat[6][8]={{0,3,4,0,0,0,6,8}, {5,13,6,0,0,0,2,3,}, {2,6,2,7,3,0,10,0}, {0,0,4,15,4,1,6,0}, {0,0,7,12,6,9,10,4}, {5,0,6,10,6,4,8,0,}};
            total=problema13(&mat[0][0]);
            cout<<"el total de estrella es: "<<total<<endl;
            break;
            }
    case 18:{
        int n;
        char permuta[]="0123456789";
        cout<<"Ingrese el numero de permutacion a escoger: ";
        cin>> n;
        problema18(permuta, n);
        cout << "La permutacion lexicografica de " << n << " con los numeros del 0 al 9 es "<<permuta<< endl;

    }
    }



    return 0;
}
