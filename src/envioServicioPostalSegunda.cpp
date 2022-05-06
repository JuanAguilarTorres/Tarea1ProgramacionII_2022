#include "envioServicioPostalSegunda.h"

envioServicioPostalSegunda::envioServicioPostalSegunda(int peso, int distancia)
{
    this->peso = peso;
    this->distancia = distancia;

    this->tarifaBaja = 0.0280;
    this->tarifaMedia = 0.0530;
    this->tarifaAlta = 0.0750;
}

double envioServicioPostalSegunda::calcular()
{
    if (this->distancia == 0)
    {
        return 0.0;
    }

    if (this->peso <=3)
    {
        return this->tarifaBaja * this->distancia;
    }
    else if ((4<= this->peso) && (this->peso <=8))
    {
        return this->tarifaMedia * this->distancia;
    }
    else if (9<= this->peso)
    {
        return this->tarifaAlta * this->distancia;
    }
    
    return 0.0;
}

envioServicioPostalSegunda::~envioServicioPostalSegunda(){
    
}
