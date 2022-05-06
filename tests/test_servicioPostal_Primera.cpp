#include <gtest/gtest.h>
#include "../src/envioServicioPostalPrimera.h"

namespace
{
    TEST(Test_servicioPostal_Primera, Test_pocoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalPrimera* servicioPostal = new envioServicioPostalPrimera(3, 1);

        // Act - ejecute la operación
        double actual = servicioPostal->calcular();
        double esperada = 0.300;
        
        delete servicioPostal;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Primera, Test_medioPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalPrimera* servicioPostal = new envioServicioPostalPrimera(6, 1);

        // Act - ejecute la operación
        double actual = servicioPostal->calcular();
        double esperada = 0.450;
        
        delete servicioPostal;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Primera, Test_muchoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalPrimera* servicioPostal = new envioServicioPostalPrimera(9, 1);

        // Act - ejecute la operación
        double actual = servicioPostal->calcular();
        double esperada = 0.600;
        
        delete servicioPostal;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
}