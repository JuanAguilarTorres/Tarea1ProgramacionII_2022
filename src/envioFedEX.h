#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"

class envioFedEX : public envio 
{
    double costoBase;
 
    public:
    virtual double calcular(int peso, int distancia);
};

#endif
