#include "solucion.h"
#include <tuple>

using namespace std;

//IMPLEMENTAR FUNCIONES


int pointProd(vector<int> v1, vector<int> v2){
    int result = 0;
    for(int i=0; i<v1.size(); i++){
        result = result + (v1[i]*v2[i]);
    }
}

vector<vector<int>> transposeMatrixProd(vector<vector<int>> v1){
    vector<vector<int>> result = v1;
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v1[i].size(); j++){
            result[i][j] = (v1[i][j] * v1[i][j]);
        }
    }
    return result;
}

vector<vector<int>> trasponer(vector<vector<int>> &matriz){
    if(esCuadrado(matriz)){
        return transposeMatrix(matriz);
    }
}

vector<vector<int>> reDimensionarMatriz(vector<vector<int>> matriz, int n, int m){
    vector<vector<int>> result(m, vector<int>(n,0));
    int index_x = 0;
    int index_y = 0;
    for(int i = 0; i<matriz.size(); i++){
        for(int j = 0; j<matriz[0].size(); j++){
            result[index_x % m][index_y % n] = matriz[i][j];
            index_y++;
            if(index_y%n==0){
                index_y = 0;
                index_x++;
            }
        }
    }

    return result;
}

bool esCuadrado(vector<vector<int>> v1){
    bool res = true;
    if(!v1.empty()){
        for(int i = 0; i<v1.size(); i++){
            if(v1.size() != v1[i].size()){
                res = false;
            }
        }
    }
    return res;
}

int contarPicos(vector<vector<int>> matriz){
    int res = 0;
    if(matriz.size()>=2 && matriz[0].size()>=2){
        for(int i = 0; i<matriz.size(); i++) {
            for (int j = 0; j < matriz.size(); j++) {
                if (esPico(matriz, i, j)) {
                    res++;
                }
            }
        }
    }
    return res;
}

bool esPico(vector<vector<int>> matriz, int i, int j) {
    bool response = false;

    if (i - 1 >= 0 && i + 1 < matriz.size()) {
        if (j - 1 >= 0 && j + 1 < matriz[0].size()) {
            for (int a = i - 1; a <= i + 1; a++) {
                for (int b = j - 1; b <= j + 1; b++) {
                    if ((matriz[i][j] > matriz[a][b]) || (i == a && j == b)) {
                        response = true;
                    }
                }
            }
        }
    }

    return response;
}

tuple<tuple<int,int>, vector<tuple<int,int,int>>> aTriplas(vector<vector<int> >m){
    tuple<tuple<int,int>, vector<tuple<int,int,int>>> aux;
    get<0>(aux) = make_tuple(m.size(),m[0].size());
    for(int i=0; i<m.size(); i++){
        for (int j = 0; j < m[0].size(); ++j) {
            if(m[i][j] != 0){
                get<1>(aux).push_back(make_tuple(i,j, m[i][j]));
            }
        }
    }
    return aux;
}

vector<vector<int>> aMatriz(vector<tuple<int,int,int>> m, tuple<int,int> dim){
    vector<vector<int>> aux(get<0>(dim), vector<int>(get<1>(dim), 0));
    for(auto & i : m){
        int x = get<0>(i);
        int y = get<1>(i);
        int n = get<2>(i);
        aux[x][y] = n;

    }
    return aux;
}

vector<vector<int>> transposeMatrix(vector<vector<int>> matrix){
    vector<vector<int>> result = matrix;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size();j++){
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

void printTupleMatrix(vector<tuple<int,int,int>> matrix){
    for(int i = 0; i<matrix.size(); i++){

    }
}