#ifndef ENVIOSERVICIOPOSTALPRIMERA_H
#define ENVIOSERVICIOPOSTALPRIMERA_H

#include "envio.h"

class envioServicioPostalPrimera : public envio
{
    int peso;
    int distancia;
    
    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    envioServicioPostalPrimera(int peso, int distancia);
    virtual double calcular();
};

#endif
