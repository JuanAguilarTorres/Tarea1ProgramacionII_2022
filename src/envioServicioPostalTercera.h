#ifndef ENVIOSERVICIOPOSTALTERCERA_H
#define ENVIOSERVICIOPOSTALTERCERA_H

#include "envio.h"

class envioServicioPostalTercera : public envio
{
    int peso;
    int distancia;

    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    envioServicioPostalTercera(int peso, int distancia);
    virtual double calcular();
    ~envioServicioPostalTercera();
};

#endif
