#include <gtest/gtest.h>
#include "../src/envioFedEX.h"

namespace
{
    TEST(Test_envioFedEX, Test_costoBase)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioFedEX fedEx(5, 100);

        // Act - ejecute la operación
        double actual = fedEx.calcular();
        double esperada = 35.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_envioFedEX, Test_distanciaMayor)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioFedEX fedEx(5, 600);

        // Act - ejecute la operación
        double actual = fedEx.calcular();
        double esperada = 50.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_envioFedEX, Test_pesoMayor)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioFedEX fedEx(15, 100);

        // Act - ejecute la operación
        double actual = fedEx.calcular();
        double esperada = 45.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_envioFedEX, Test_costoMaximo)
    {
        /// AAA

        // Arrange - configurar el escenario
        envioFedEX fedEx(15, 600);

        // Act - ejecute la operación
        double actual = fedEx.calcular();
        double esperada = 60.00;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}