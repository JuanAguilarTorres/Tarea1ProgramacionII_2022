#include "envioFedEX.h"

envioFedEX::envioFedEX(int peso, int distancia)
{
    this->peso = peso;
    this->distancia = distancia;

    this->costoBase = 35.00;
}

double envioFedEX::calcular()
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

envioFedEX::~envioFedEX(){
    
}
