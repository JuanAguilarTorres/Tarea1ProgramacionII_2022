#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{
    TEST(Test_servicioPostal_Tercera, Test_pocoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal servicioPostal;

        // Act - ejecute la operación
        int actual = servicioPostal.calcular(3, 3, 1);
        int esperada = 0.0120;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Tercera, Test_medioPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal servicioPostal;

        // Act - ejecute la operación
        int actual = servicioPostal.calcular(3, 6, 1);
        int esperada = 0.0120;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Tercera, Test_muchoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal servicioPostal;

        // Act - ejecute la operación
        int actual = servicioPostal.calcular(3, 9, 1);
        int esperada = 0.0120;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}