#include <iostream>
using namespace std;

int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int opc,menu;
    float Csaldo = 20000, Refectivo = 0, Msaldo = 0;



    cout<<endl<<"Bienvenido al menu";
    cout<<"Selecione una opcion que quiera realizar";    
    cout<<"1.- factorizar"<<endl;
    cout<<"2.- Cajero automatico"<<endl;
    cin>>menu;

    if(menu == 1)
    {
    do
    {
        int numero;
        cout << "Introduce un numero: ";
        cin >> numero;

        // Calcula y muestra el factorial
        int resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
        cout << "Le gustaria volver a factorizar? ";
        cout << "1.- Si" << endl;
        cout << "2. No" << endl;
        cin >> opc;
    } while (opc != 2);
    return 0;
    }
    else if (menu == 2)
    {
        int opc2;
        cout<<endl<<"Bienvenido al cajero";
        cout<<"Consultar saldo"<<
        endl<<"Retirar saldo"<<endl;
        cin>>opc2;
        switch (opc2)
        {
        case 1:
                    cout<<endl<<"Este el saldo hasta el momento"<<Csaldo;
            break;
        case 2:
                cout<<endl<<"Cuanto es el saldo que desea retiriar"<<Refectivo;
                cin>>Refectivo;

                Csaldo =- Refectivo;
                cout<<endl<<"Este es tu nuevo saldo"<<Csaldo;
            break;
        default:
            break;
        }


    }


}


