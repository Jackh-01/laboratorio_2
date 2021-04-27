#include "L2.h"

int main()
{
    char c1[]="hola", c2[]="hpla";
    int menu;
    bool res;
    cout << "ingrese el programa a realizar: ";
    cin>>menu;

    switch (menu) {
        case 3:
            res= problema3(&c1[0], c2);
            cout<<res<<endl;
        break;


    }

    return 0;
}
