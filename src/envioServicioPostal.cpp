#include "envioServicioPostal.h"


double envioServicioPostal::calcular(int clase, int peso, int distancia)
{
    if (distancia == 0)
    {
        return 0.0;
    }
    
    if (peso<=3)
    {
        switch (clase)
        {
        case 1:
            return (0.300 * distancia);
            break;
        
        case 2:
            return (0.0280 * distancia);
            break;

        case 3:
            return (0.0120 * distancia);
            break;
        
        default:
            return 0.0;
            break;
        }
    }
    else if (4<=peso<=8)
    {
        switch (clase)
        {
        case 1:
            return (0.450 * distancia);
            break;
        
        case 2:
            return (0.0530 * distancia);
            break;

        case 3:
            return (0.0120 * distancia);
            break;
        
        default:
            return 0.0;
            break;
        }
    }
    else if (9<=peso)
    {
        switch (clase)
        {
        case 1:
            return (0.600 * distancia);
            break;
        
        case 2:
            return (0.0750 * distancia);
            break;

        case 3:
            return (0.0120 * distancia);
            break;
        
        default:
            return 0.0;
            break;
        }
    }
    
    
}