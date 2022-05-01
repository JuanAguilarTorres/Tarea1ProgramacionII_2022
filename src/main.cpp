#include "envio.h"
#include "envioFedEX.h"
#include "envioServicioPostal.h"
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

    envioServicioPostal* segundoEnvio = new envioServicioPostal();
    arregloEnvios.push_back(segundoEnvio);

    envioFedEX* cuartoEnvio = new envioFedEX();
    arregloEnvios.push_back(cuartoEnvio);

    envioServicioPostal* quintoEnvio = new envioServicioPostal();
    arregloEnvios.push_back(quintoEnvio);

    for(envio* envio: arregloEnvios)
    {
        totalMontoEnvios += envio->calcular();
    }

    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;
}
