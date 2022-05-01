#ifndef ENVIOSERVICIOPOSTALPRIMERA_H
#define ENVIOSERVICIOPOSTALPRIMERA_H

#include "envio.h"

class envioServicioPostalPrimera : public envio
{
    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    envioServicioPostalPrimera();
    virtual double calcular(int peso, int distancia);
};

#endif
