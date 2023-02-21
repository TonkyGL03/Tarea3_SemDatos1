#include "GatoDom.h"

using namespace std;

string GatoDomestico::getNombre() const{
    return Nombre;
}

string GatoDomestico::getDieta() const{
    return Dieta;
}

string GatoDomestico::getLugarDeNacimiento() const{
    return LugarDeNacimiento;
}

int GatoDomestico::getAnoDeNacimiento() const {
    return AnoDeNacimiento;
}

string GatoDomestico::getNombreDueno() const {
    return NombreDueno;
}

string GatoDomestico::getRaza() const{
    return Raza;
}

string GatoDomestico::toString() const{
    string result;

    result = Nombre;
    result+="|";
    result+= Dieta;
    result+="|";
    result+=LugarDeNacimiento;
    result+="|";
    result+=AnoDeNacimiento;
    result+="|";
    result+=NombreDueno;
    result+="|";
    result+=Raza;

    return result;
}

void GatoDomestico::setNombre(const string& n){
    Nombre=n;
}

void GatoDomestico::setDieta(const string& d){
    Dieta=d;
}

void GatoDomestico::setLugarDeNacimiento(const string& l){
    LugarDeNacimiento=l;
}

void GatoDomestico::setAnoDeNacimiento(const int& a){
    AnoDeNacimiento=a;
}

void GatoDomestico::setNombreDueno(const string& n){
    NombreDueno=n;
}

void GatoDomestico::setRaza(const string& r){
    Raza=r;
}
