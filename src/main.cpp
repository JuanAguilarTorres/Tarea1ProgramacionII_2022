#include "envio.h"
#include "envioFedEX.h"
#include "envioServicioPostalPrimera.h"
#include "envioServicioPostalSegunda.h"
#include "envioServicioPostalTercera.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{ 
    //Ejemplo
    vector<envio *> arregloEnvios;
    double totalMontoEnvios = 0;

    envioFedEX* primerEnvio = new envioFedEX();
    arregloEnvios.push_back(primerEnvio);

    envioServicioPostalPrimera* segundoEnvio = new envioServicioPostalPrimera();
    arregloEnvios.push_back(segundoEnvio);

    envioServicioPostalSegunda* cuartoEnvio = new envioServicioPostalSegunda();
    arregloEnvios.push_back(cuartoEnvio);

    envioServicioPostalTercera* quintoEnvio = new envioServicioPostalTercera();
    arregloEnvios.push_back(quintoEnvio);

    for(envio* envio: arregloEnvios)
    {
        totalMontoEnvios += envio->calcular(5, 100);
    }

    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;
}
