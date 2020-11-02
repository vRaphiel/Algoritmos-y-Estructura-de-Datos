#include "lib/gtest.h"
#include "src/solucion.h"

using namespace std;

int main(int argc, char **argv) {

    /*
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    */


    // Excersise 8

    //vector<vector<int>> terreno = {{-1,-4,2,1,0},{4,2,6,-7,-2},{1,7,3,5,0},{0,0,4,6,-1},{2,5,6,3,-3}};
    /*
    int n = 10;
    int mts = 0;
    vector<vector<int>> terreno = {{0,0,0,0,0},{0,1,1,0,0},{0,1,0,0,0},{0,0,0,1,0},{0,1,1,1,0}};
     */
    //printMatrix(terreno2);
    //cout << " ----- " << endl;
    //cout << islas(terreno) << endl;
    //cout << islas(terreno2) << endl;

    //printMatrix(terreno);

    //islas(terreno);

/*
    tuple<bool, int, int> esta = estaRodeadoDeAgua(terreno, 1, 1);
    cout << " ----- " << endl;
    cout << get<0>(esta) << endl;
    cout << get<1>(esta) << endl;
    cout << get<2>(esta) << endl;
    */

    /*
    for(int i = 0; i<aux.size(); i++){
        for(int j = 0; j<aux[i].size();j++){
            cout << " - " << get<0>(aux[i][j]) << " - " << get<1>(aux[i][j]) << endl;
        }
    }
     */
    /*
    cout << " -------- Terreno Elevado -------" << endl;
    elevar(terreno, 3);
    printMatrix(terreno);

    cout << " -------- Valor mas alto  -------" << endl;
    cout << valorMasAlto(terreno) << endl;

    cout << " -------- Bajo el Agua  -------" << endl;
    cout << bajoElAgua(terreno) << endl;

    cout << " -------- Sobresalen  -------" << endl;
    cout << sobresalen(terreno, n, mts) << endl;
    cout << mts << endl;
    */


    /*
    vector<vector<int> > grid = {   { 1, 1, 0, 1, 1 },
                                    { 1, 0, 0, 0, 0 },
                                    { 0, 0, 0, 0, 1 },
                                    { 1, 1, 0, 1, 1 }  };

    vector<vector<int> > grid2 = {  { 0, 0, 0, 1, 1 },
                                    { 0, 1, 1, 0, 1 },
                                    { 0, 0, 1, 0, 0 },
                                    { 1, 0, 0, 0, 1 } };

    vector<vector<int> > grid3 = {  { 1, 0, 0, 1, 0 },
                                    { 1, 0, 0, 0, 0 },
                                    { 0, 0, 0, 0, 1 },
                                    { 0, 1, 0, 1, 1 } };

    vector<vector<int>> grid4 = {
                                    {0,0,0,0,0},
                                    {0,1,1,0,0},
                                    {0,1,0,0,0},
                                    {0,0,0,1,0},
                                    {0,1,1,1,0}
                            };
    cout << "Number of distinct islands is "
         << countDistinctIslands(grid);
    cout << "Number of distinct islands is "
         << countDistinctIslands(grid2);
    cout << "Number of distinct islands is "
         << countDistinctIslands(grid3);
    cout << "Number of distinct islands is "
         << countDistinctIslands(grid4);
*/


    // Exercise 9
    vector<vector<int>> a = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };

    // Function Call
    spiralPrint(a.size(), a[0].size(), a);

    return 0;
}