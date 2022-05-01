#ifndef ENVIOSERVICIOPOSTALSEGUNDA_H
#define ENVIOSERVICIOPOSTALSEGUNDA_H

#include "envio.h"

class envioServicioPostalSegunda : public envio
{
    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    virtual double calcular(int peso, int distancia);
};

#endif
