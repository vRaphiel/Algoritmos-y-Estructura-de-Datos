#include "../src/sopaDeLetras.h"
#include "../lib/gtest.h"

// Escribir tests aca:
TEST(sopaDeLetras, SopaHorizontal) {
    vector<vector<char>> sopa{
        {'s','o','p','a'},
        {'a','p','o','s'},
        {'f','g','j','s'},
        {'w','t','y','a'}};
    int n = sopaDeLetras(sopa);
    EXPECT_EQ(n, 2);
}

TEST(sopaDeLetras, SopaVertical) {
    vector<vector<char>> sopa{
            {'s','a','p','a'},
            {'o','p','o','d'},
            {'p','o','j','k'},
            {'a','s','y','a'}};
    int n = sopaDeLetras(sopa);
    EXPECT_EQ(n, 2);
}