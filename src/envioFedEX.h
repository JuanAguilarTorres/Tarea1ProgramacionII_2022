#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"

class envioFedEX : public envio 
{
    double costo;
 
    public:
    double calcular(int peso, int distancia);
};

#endif
