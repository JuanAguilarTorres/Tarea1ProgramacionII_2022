#ifndef ENVIOSERVICIOPOSTALSEGUNDA_H
#define ENVIOSERVICIOPOSTALSEGUNDA_H

#include "envio.h"

class envioServicioPostalSegunda : public envio
{
    int peso;
    int distancia;

    double tarifaBaja;
    double tarifaMedia;
    double tarifaAlta;

    public:
    envioServicioPostalSegunda(int peso, int distancia);
    virtual double calcular();
    ~envioServicioPostalSegunda();
};

#endif
