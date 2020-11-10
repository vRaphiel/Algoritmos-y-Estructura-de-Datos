#include "lib/gtest.h"
#include "src/solucion.h"

using namespace std;

int main(int argc, char **argv) {

    // DESCOMENTAR CUANDO SE USEN TESTS
    /*
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    */
    vector<vector<int>> matrix = {{1,3,2,5,1},{6,1,5,2,6},{3,6,3,4,0},{3,9,6,1,5}};
    //printMatrix(matrix);
    // Ejercicio 1
    //printMatrix(matrix);

    // Ejercicio 2


    //vector<vector<int>> max = reDimensionarMatriz(matriz, 6,2);
    //printMatrix(max);

    //int picos = contarPicos(matriz);
    //cout << "cant picos: " << picos << endl;


    vector<vector<int>> matriz_tupla = {{1,0,2,0,1},{0,1,5,2,6},{3,6,0,4,0},{3,0,6,0,5},{6,1,2,9,7}};
    printMatrix(matriz_tupla);
    cout << " -------------------- " << endl;
    printMatrix(transposeMatrix(matriz_tupla));

    //printMatrix(matriz_tupla);
    //tuple<tuple<int,int>, vector<tuple<int,int,int>>> result = aTriplas(matriz_tupla);

    //cout << " -------------------- " << endl;
    //cout << get<0>(get<0>(result)) << endl;
    //cout << get<1>(get<0>(result)) << endl;

    //cout << " -------------------- " << endl;
    //for(auto & i : get<1>(result)){
    //    cout << "(" << get<0>(i) << "," << get<1>(i) << "," << get<2>(i) << ")" << endl;
    //}

    return 0;
}
