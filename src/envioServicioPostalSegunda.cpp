#include "envioServicioPostal.h"

envioServicioPostal::envioServicioPostal()
{
    this->tarifaBaja = 0.0280;
    this->tarifaMedia = 0.0530;
    this->tarifaAlta = 0.0750;
}

double envioServicioPostal::calcular(int peso, int distancia)
{
    if (distancia == 0)
    {
        return 0.0;
    }

    if (peso<=3)
    {
        return tarifaBaja*distancia;
    }
    else if (4<=peso<=8)
    {
        return tarifaMedia*distancia;
    }
    else if (9<=peso)
    {
        return tarifaAlta*distancia;
    }
    
    
}