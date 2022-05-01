#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "envio.h"

class envioServicioPostal : public envio
{
    protected:
    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    virtual double calcular(int peso, int distancia);
};

#endif
