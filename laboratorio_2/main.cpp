#include "problemas.h"

int main()
{
    char c1[]="hola", c2[]="hola";
    int menu, A, B;
    int l_A[4];
    int l_B[4];
    bool res;
    cout << "ingrese el problema a realizar: ";
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
        case 2:{
            problema2();
            break;
            }
        case 3:{
            res= problema3(&c1[0], c2);
            cout<<res<<endl;        
            break;
            }
        case 4:{
            char *cadena = new char[1];
            cout << "Ingrese una cadena de numeros: "; cin >> cadena;
            problema4(cadena);
            delete[] cadena;
            break;
            }
        case 6:{
            char cadena[]="Hola!", *salida;
            salida= problema6(cadena);
            cout<< salida<< endl;
            break;
            }
        case 5:{
            int num;char cadena [10];
            char *c=cadena;
            cout << "Ingrese un numero: "; cin >> num;
            problema5( num, c);
            break;}
        case 7:{
            char *c = new char[0];
            cout << "Ingrese una cadena de caracteres: "; cin >> c;
            problema7( c);
            delete[] c;
            break;
            }
        case 8: {
            char cadena[]="abcdefghijk123lmno456pqr789stuvwxyz";
            problema8(cadena);
            break;
            }
        case 9:{
           break;
           }

        case 10:{
            char num[]="DC";
            cout<<problema10(num)<<endl;
        break;
        }
        case 11:{
            char reserva, silla[3];
            silla[2]='\0';
            while (true){
                cout<<"Ingrese I para ingresar una reserva o ingrese C para cancelar una:  "; cin>>reserva;
                cout<<"Ingrese la silla: "; cin>>silla;
                problema11(reserva,silla);
            break;}
        case 12:{
                /*Un cuadro mágico es una matriz, de numeros enteros sin repetir, en la que la suma de los numeros
                en cada columna, cad fila, y cada diagonal prinsipal, tienen como resultado el mismo constante
                escriba un progama que permita al usuario ingresar, una matriz cuadrada, imprima la matriz, y verifique si
                la matriz es cuadrado mágico*/
                int a,b,c,d,e,f,g,h,i, num=0;
                cout << "\n\nCuadrado magico 3x3\n\n";
                cout << "\t _____________\n";
                cout << "\t | A | B | C |\n";
                cout << "\t _____________\n";
                cout << "\t | D | E | F |\n";
                cout << "\t _____________\n";
                cout << "\t | G | H | I |\n";
                cout << "\t _____________\n";
                cout << "\nIngrese los valores de cada punto: \n\n";
                cout << "\t | A --> ";cin >> a;cout << "\t | B --> ";cin >> b;cout << "\t | C --> ";cin >> c;cout << "\n\n";
                cout << "\t | D --> ";cin >> d;cout << "\t | E --> ";cin >> e;cout << "\t | F --> ";cin >> f;cout << "\n\n";
                cout << "\t | G --> ";cin >> g;cout << "\t | H --> ";cin >> h;cout << "\t | I --> ";cin >> i;cout << "\n\n";

                char *cad_10 = new char [num];
                cout << "\n\n\nIngrese el numero = "; cin >> cad_10;
                break;
            }



    case 14:{
        problema14();




        break;
    }


        case 16:{
            int caminos;
            caminos=problema16(2);
            cout<<"el total de caminos es:"<<caminos<<endl;
            break;

            }
        case 15:{
            cout << "ingrese los valores del rectangulo A en el orden X, Y, Ancho y Altura (uno por uno): " << endl;
            for(A=0;A<4;A++){
            cin >> l_A[A];
            }
            cout << "ingrese los valores del rectangulo B en el orden X, Y, Ancho y Altura (uno por uno): " << endl;
            for(A=0;A<4;A++){
            cin >> l_B[A];
            }
            problema15(l_A, l_B);
            break;
            }
       case 13:{
            int total, mat[6][8]={{0,3,4,0,0,0,6,8}, {5,13,6,0,0,0,2,3,}, {2,6,2,7,3,0,10,0}, {0,0,4,15,4,1,6,0}, {0,0,7,12,6,9,10,4}, {5,0,6,10,6,4,8,0,}};
            total=problema13(&mat[0][0]);
            cout<<"el total de estrella es: "<<total<<endl;
            break;
            }

       }
    case 17:{
        int num=284;
        cout<<problema17(num)<<endl;
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
