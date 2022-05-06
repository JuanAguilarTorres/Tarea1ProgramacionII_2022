#include <gtest/gtest.h>
#include "../src/envioServicioPostalTercera.h"

namespace
{
    TEST(Test_servicioPostal_Tercera, Test_pocoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalTercera servicioPostal(3, 1);

        // Act - ejecute la operación
        double actual = servicioPostal.calcular();
        double esperada = 0.0120;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Tercera, Test_medioPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalTercera servicioPostal(6, 1);

        // Act - ejecute la operación
        double actual = servicioPostal.calcular();
        double esperada = 0.0120;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Tercera, Test_muchoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalTercera servicioPostal(9, 1);

        // Act - ejecute la operación
        double actual = servicioPostal.calcular();
        double esperada = 0.0120;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
}