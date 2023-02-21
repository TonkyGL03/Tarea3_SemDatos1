#include <stdlib.h>
#include <iostream>

#include "LSLL.cpp"
#include "GatoDom.cpp"
using namespace std;

int main(){
    string myStr;
    int opc;

    switch(opc){

        do{
        cout << "Que desea hacer?" << endl;
        cout << "1) Agrega" << endl;
        cout << "2) Buscar" << endl;
        cout << "3) Elimina" << endl;
        cout << "4) Muestra" << endl;
        cout << "5) Salir" << endl;
        cin >> opc;

        case 1: {
            char op;
            string n;
            do{
                cout << "Nombre: ";
                getline(cin, myStr);
                GatoDomestico.setNombre(myStr);

                cout << "Dieta: ";
                getline(cin, myStr);
                GatoDomestico.setDieta(myStr);

                cout << "Lugar de Nacimiento: ";
                getline(cin, myStr);
                GatoDomestico.setLugarDeNacimiento(myStr);

                cout << "Año de Nacimiento: ";
                getline(cin, myStr);
                GatoDomestico.setAnoDeNacimiento(myStr);

                cout << "Nombre Dueño: ";
                getline(cin, myStr);
                GatoDomestico.setNombreDueno(myStr);

                cout << "Raza: ";
                getline(cin, myStr);
                GatoDomestico.setRaza(myStr);

                cout << "insertar otro? (s/n): ";
                cin >> op;
                cin.ignore();

            }while(op=='s');

            cout << endl << endl;

            cout << "contenido de la lista: " << endl;
            cout << List.toString();
            cout << endl << endl;
                }
            break;

        case 2:{
            List.retrieve();
            }
            break;

        case 3:{
            List.deleteAll();
            }
            break;

        case 4: {
            List.print();
            }
            break;

        } while (opc != 5);
    }


return 0;
}
