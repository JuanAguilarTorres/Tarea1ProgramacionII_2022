#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{
    TEST(Test_servicioPostal_Segunda, Test_pocoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal servicioPostal;

        // Act - ejecute la operación
        int actual = servicioPostal.calcular(2, 3, 1);
        int esperada = 0.0280;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Segunda, Test_medioPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal servicioPostal;

        // Act - ejecute la operación
        int actual = servicioPostal.calcular(2, 6, 1);
        int esperada = 0.0530;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Segunda, Test_muchoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal servicioPostal;

        // Act - ejecute la operación
        int actual = servicioPostal.calcular(2, 9, 1);
        int esperada = 0.0750;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}