
#ifndef L07_MATRICESYTABLEROS_H
#define L07_MATRICESYTABLEROS_H

#include <vector>
#include "string"
#include <iostream>
#include <stdexcept>

using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> matrix);
void printMatrix(vector<vector<int>> matrix);
int pointProd(vector<int> v1, vector<int> v2);
bool esCuadrado(vector<vector<int>> v1);
vector<vector<int>> trasponer(vector<vector<int>> &matriz);
vector<vector<int>> reDimensionarMatriz(vector<vector<int>> matriz, int n, int m);
bool esPico(vector<vector<int>> matriz, int i, int j);
int contarPicos(vector<vector<int>> matriz);
tuple<tuple<int,int>, vector<tuple<int,int,int>>> aTriplas(vector<vector<int> >m);

#endif //L07_MATRICESYTABLEROS_H


