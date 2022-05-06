#include <gtest/gtest.h>
#include "../src/envioServicioPostalSegunda.h"

namespace
{
    TEST(Test_servicioPostal_Segunda, Test_pocoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalSegunda* servicioPostal = new envioServicioPostalSegunda(3, 1);

        // Act - ejecute la operación
        double actual = servicioPostal->calcular();
        double esperada = 0.0280;
        
        delete servicioPostal;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Segunda, Test_medioPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalSegunda* servicioPostal = new envioServicioPostalSegunda(6, 1);

        // Act - ejecute la operación
        double actual = servicioPostal->calcular();
        double esperada = 0.0530;
        
        delete servicioPostal;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Segunda, Test_muchoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalSegunda* servicioPostal = new envioServicioPostalSegunda(9, 1);

        // Act - ejecute la operación
        double actual = servicioPostal->calcular();
        double esperada = 0.0750;
        
        delete servicioPostal;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
}