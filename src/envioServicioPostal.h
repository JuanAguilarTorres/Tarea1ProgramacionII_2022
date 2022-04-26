#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "envio.h"

class envioServicioPostal : public envio
{

    public:
    double calcular(int clase, int peso, int distancia);
};

#endif
