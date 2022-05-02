#include <gtest/gtest.h>
#include "../src/envioServicioPostalPrimera.h"

namespace
{
    TEST(Test_servicioPostal_Primera, Test_pocoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalPrimera servicioPostal(3, 1);

        // Act - ejecute la operación
        int actual = servicioPostal.calcular();
        int esperada = 0.300;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Primera, Test_medioPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalPrimera servicioPostal(6, 1);

        // Act - ejecute la operación
        int actual = servicioPostal.calcular();
        int esperada = 0.450;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_servicioPostal_Primera, Test_muchoPeso)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioServicioPostalPrimera servicioPostal(9, 1);

        // Act - ejecute la operación
        int actual = servicioPostal.calcular();
        int esperada = 0.600;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}