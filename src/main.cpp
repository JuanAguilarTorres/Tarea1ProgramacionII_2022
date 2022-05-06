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

    //Vector
    vector<envio *> arregloEnvios;
    double totalMontoEnvios = 0;
    
    //Envios
    envioFedEX* primerEnvio = new envioFedEX(5, 100);
    arregloEnvios.push_back(primerEnvio);

    envioServicioPostalPrimera* segundoEnvio = new envioServicioPostalPrimera(5, 100);
    arregloEnvios.push_back(segundoEnvio);

    envioServicioPostalSegunda* cuartoEnvio = new envioServicioPostalSegunda(5, 100);
    arregloEnvios.push_back(cuartoEnvio);

    envioServicioPostalTercera* quintoEnvio = new envioServicioPostalTercera(5, 100);
    arregloEnvios.push_back(quintoEnvio);


    //Suma
    for(envio* envio: arregloEnvios)
    {
        totalMontoEnvios += envio->calcular();
        delete envio;
    }

    //Output
    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;
}
