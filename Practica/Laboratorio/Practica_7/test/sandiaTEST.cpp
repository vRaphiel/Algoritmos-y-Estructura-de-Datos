#include "../src/sandia.h"
#include "../lib/gtest.h"

// Escribir tests aca:
TEST(sandiaTest, Caso1) {
    int n = 20;
    EXPECT_TRUE(sandia(n));
}

TEST(sandiaTest, Caso2) {
    int n = 22;
    EXPECT_TRUE(sandia(n));
}

TEST(sandiaTest, Caso3) {
    int n = 13;
    EXPECT_FALSE(sandia(n));
}

TEST(sandiaTest, Caso4) {
    int n = 40;
    EXPECT_TRUE(sandia(n));
}
