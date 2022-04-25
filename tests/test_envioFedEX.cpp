#include <gtest/gtest.h>
#include "../src/envioFedEX.h"

namespace
{
    TEST(Test_envioFedEX, Test_costoBase)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedEX fedEx;

        // Act - ejecute la operación
        int actual = fedEx.Calcular(100, 5);
        int esperada = 35.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_envioFedEX, Test_distanciaMayor)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedEX fedEx;

        // Act - ejecute la operación
        int actual = fedEx.Calcular(600, 5);
        int esperada = 50.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_envioFedEX, Test_pesoMayor)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedEX fedEx;

        // Act - ejecute la operación
        int actual = fedEx.Calcular(100, 15);
        int esperada = 45.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_envioFedEX, Test_costoMaximo)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedEX fedEx;

        // Act - ejecute la operación
        int actual = fedEx.Calcular(600, 15);
        int esperada = 60.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}