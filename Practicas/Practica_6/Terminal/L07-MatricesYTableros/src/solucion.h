
#ifndef L07_MATRICESYTABLEROS_H
#define L07_MATRICESYTABLEROS_H

#include <vector>
#include "string"
#include <iostream>
#include <set>

using namespace std;

// Exercise 1
void printMatrix(vector<vector<int>> matrix);

// Exercise 2
int pointProd(vector<int> v1, vector<int> v2);
bool isQuad(vector<vector<int>> v1);

// Exercise 3
vector<vector<int>> reDimensionMatrix(vector<vector<int>> matrix, int n, int m);

// Exercise 4
vector<vector<int>> transpose(vector<vector<int>> &matriz);
vector<vector<int>> transposeMatrix(vector<vector<int>> matrix);

// Exercise 5
int countPicks(vector<vector<int>> matriz);
bool isPick(vector<vector<int>> matriz, int i, int j);

//Exercise 6
tuple<tuple<int,int>, vector<tuple<int,int,int>>> aTriplas(vector<vector<int> >m);
vector<vector<int>> aMatriz(vector<tuple<int,int,int>> m, tuple<int,int> dim);
void transponerDispersa(vector<tuple<int,int,int>> &m);

//Exercise 7
vector<vector<float>> temperaturaPromedio(vector<vector<vector<float>>> tensor);
vector<float> temperaturaPromedioZona(vector<vector<vector<float>>> tensor);
float promedio(vector<float> prom);

// Exercise 8
void elevar (vector<vector<int>>& terreno, int x);
bool sobresalen(vector<vector<int>> terreno, int n, int& mts);

int bajoElAgua(vector<vector<int>> terreno);
int valorMasAlto(vector<vector<int>> terreno);
int islas(vector<vector<int>> terreno);
vector<tuple<int,int>> esIsla(vector<vector<int>> terreno, int x, int y);
bool pertenece(vector<tuple<int,int>> listaItems, tuple<int,int> pos);
bool perteneceAlTotal(vector<vector<tuple<int,int>>> listaItems, tuple<int, int> pos);
vector<tuple<int,int>> esIsla_aux(vector<vector<int>> terreno, int x, int y, vector<tuple<int,int>>& posiciones);

// Second islands
int countDistinctIslands(vector<vector<int> >& grid);
void dfs(vector<vector<int> >& grid, int x0, int y0, int i, int j, vector<pair<int, int> >& v);

// Exercise 9
bool esValle(vector<vector<int>> terreno, int i, int j);
void spiralPrint(int m, int n, vector<vector<int>> a);
#endif //L07_MATRICESYTABLEROS_H
