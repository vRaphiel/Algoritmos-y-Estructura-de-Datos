#include "../src/puntaje.h"
#include "../lib/gtest.h"

// Escribir tests aca:
TEST(puntajeTest, Caso1) {
    int n = 9;
    EXPECT_TRUE(28 == puntaje(n));
}

TEST(puntajeTest, Caso2) {
    int n = 12;
    EXPECT_TRUE(22 == puntaje(n));
}

TEST(puntajeTest, Caso3) {
    int n = 13;
    EXPECT_TRUE(3 == puntaje(n));
}

TEST(puntajeTest, Caso4) {
    int n = 8;
    EXPECT_TRUE(6 == puntaje(n));
}
