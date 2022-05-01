#include "envioServicioPostalTercera.h"

envioServicioPostalTercera::envioServicioPostalTercera()
{
    this->tarifaBaja = 0.0120;
    this->tarifaMedia = 0.0120;
    this->tarifaAlta = 0.0120;
}

double envioServicioPostalTercera::calcular(int peso, int distancia)
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