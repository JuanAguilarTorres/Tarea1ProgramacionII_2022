#include "envioFedEX.h"

double envioFedEX::calcular(int peso, int distancia)
{
    this->costo = 35.00;
    if (distancia>500)
    {
        costo += 15.00;
    }
    
    if (peso>10)
    {
        costo += 10.00;
    }
    
    return costo;
}