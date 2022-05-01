#include "envioFedEX.h"

envioFedEX::envioFedEX()
{
    this->costoBase = 35.00;
}

double envioFedEX::calcular(int peso, int distancia)
{
    if (distancia>500)
    {
        costoBase += 15.00;
    }
    
    if (peso>10)
    {
        costoBase += 10.00;
    }
    
    return costoBase;
}