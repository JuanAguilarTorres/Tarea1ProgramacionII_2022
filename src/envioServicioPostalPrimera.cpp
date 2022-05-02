#include "envioServicioPostalPrimera.h"

envioServicioPostalPrimera::envioServicioPostalPrimera(int peso, int distancia)
{
    this->peso = peso;
    this->distancia = distancia;

    this->tarifaBaja = 0.300;
    this->tarifaMedia = 0.450;
    this->tarifaAlta = 0.600;
}

double envioServicioPostalPrimera::calcular()
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
