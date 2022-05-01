#ifndef ENVIOSERVICIOPOSTALTERCERA_H
#define ENVIOSERVICIOPOSTALTERCERA_H

#include "envio.h"

class envioServicioPostalTercera : public envio
{
    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    envioServicioPostalTercera();
    virtual double calcular(int peso, int distancia);
};

#endif
