#include "envioServicioPostalTercera.h"

envioServicioPostalTercera::envioServicioPostalTercera(int peso, int distancia)
{
    this->peso = peso;
    this->distancia = distancia;

    this->tarifaBaja = 0.0120;
    this->tarifaMedia = 0.0120;
    this->tarifaAlta = 0.0120;
}

double envioServicioPostalTercera::calcular()
{
    if (this->distancia == 0)
    {
        return 0.0;
    }

    if (this->peso <=3)
    {
        return this->tarifaBaja*distancia;
    }
    else if ((4<= this->peso) && (this->peso <=8))
    {
        return this->tarifaMedia*distancia;
    }
    else if (9<= this->peso)
    {
        return this->tarifaAlta*distancia;
    }
    
    return 0.0;
}

envioServicioPostalTercera::~envioServicioPostalTercera(){
    
}
