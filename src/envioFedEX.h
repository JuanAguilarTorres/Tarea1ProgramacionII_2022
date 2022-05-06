#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"

class envioFedEX : public envio 
{
    int peso;
    int distancia;
    
    double costoBase;
 
    public:
    envioFedEX(int peso, int distancia);
    virtual double calcular();
    ~envioFedEX();
};

#endif
