#include "problemas.h"

int main()
{
    char c1[]="hola", c2[]="hola";
    int menu, A, B;
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


<<<<<<< Updated upstream
        case 17:{
            int num=284;
            cout<<problema17(num)<<endl;
            break;
        }
=======
                        else if (salir!='n') cout << "Debe de poner s o n minusculas" << endl;
                    }
                    break;
                }



    case 14:{
        problema14();




        break;
    }

>>>>>>> Stashed changes
        case 16:{
            int caminos;
            caminos=problema16(2);
            cout<<"el total de caminos es:"<<caminos<<endl;
            break;
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
}

    return 0;
}
