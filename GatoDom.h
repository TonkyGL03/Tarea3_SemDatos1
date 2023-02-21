#ifndef GATODOM_H_INCLUDED
#define GATODOM_H_INCLUDED

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

class GatoDomestico{
private:
    std::string Nombre;
    std::string Dieta;
    std::string LugarDeNacimiento;
    int AnoDeNacimiento;
    std::string NombreDueno;
    std::string Raza;

public:

    std::string getNombre() const;
    std::string getDieta() const;
    std::string getLugarDeNacimiento() const;
    int getAnoDeNacimiento() const;
    std::string getNombreDueno() const;
    std::string getRaza() const;

    std::string toString() const;

    void setNombre(const std::string&);
    void setDieta(const std::string&);
    void setLugarDeNacimiento(const std::string&);
    void setAnoDeNacimiento(const int&);
    void setNombreDueno(const std::string&);
    void setRaza(const std::string&);
};

#endif // GATODOM_H_INCLUDED
