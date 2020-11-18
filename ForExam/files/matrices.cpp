#include "matrices.h"
#include "vector"
#include "iostream"

using namespace std;

// Algoritmo para rotar matrices
vector<vector<int>> rotacion(vector<vector<int>> m, int f, int c){  // N = |m| M=|m[0]|
    vector<vector<int>> res = m;                                        //O(N*M) (Por copiado de una matriz)
    for(int i = 0; i<m.size(); i++){                                    // N
        for(int j = 0; j<m[0].size(); j++){                             // M
            res[i][j] = m[(i + f) % m.size()][(j + c) % m[0].size()];   // O(1)
        }                                                               // O(N*M)
    }
    return res;     // O(N*M)
}

// Terrenos
// make_pair(a,b) -> pair<int,int> p; -> p.first, p.second -> O(1)
// Pre: 0 <= i0 < F && 0 <= j0 < C
vector<pair<int, int>> vecinos(int F, int C, int i0, int j0){
    vector<pair<int,int>> res;                               // O(1)
    for(int i = max(i0-1, 0); i< min(i0+2, F); i++){         // 3
        for(int j = max(j0-1, 0); j< min(j0+2, C); j++){     // 3
            if( i!= i0 || j!= j0 ){                          //
                res.push_back(make_pair(i, j));              //
            }                                                // O(1)
        }
    }
    return res;                                             // O(1)
}

bool pertenece(vector<pair<int,int>> alcanzables, pair<int, int> pos){
    bool pert = false;
    for(int i = 0; i<alcanzables.size(); i++){
        if(alcanzables[i] == pos){
            pert = true;
        }
    }
    return pert;
}


/*
vector<pair<int, int>> vecinos_menores(vector<vector<int>> m, int i0, int j0){
    vector<pair<int,int>> res;                                          // O(1)
    int filas = m.size();
    int columnas = m[0].size();
    for(int i = max(i0-1, 0); i< min(i0+2, filas); i++){                //3
        for(int j = max(j0-1, 0); j< min(j0+2, columnas); j++){         //3
            if((i!= i0 || j!= j0) && m[i][j] < m[i0][j0]){
                res.push_back(make_pair(i, j));                         //O(1)
            }
        }
    }
    return res;                                                         //O(1)
}
*/

// Vecinos menores circular modular
vector<pair<int, int>> vecinos_menores(vector<vector<int>> m, int i0, int j0){
    vector<pair<int,int>> res;                                          // O(1)
    int filas = m.size();
    int columnas = m[0].size();
    for(int i = i0 -1; i<i0+2; i++){             //3
        for(int j = j0-1; j< j0+2; j++){         //3
            int im = i % filas, jm = j % columnas;
            if((i!= i0 || j!= j0) && m[im][jm] < m[i0][j0] && !pertenece(res, make_pair(im, jm))){
                res.push_back(make_pair(i, j));                         //O(1)
            }
        }
    }
    return res;                                                         //O(1)
}

pair<int,int> encontrar_valle(vector<vector<int>> m, int i0, int j0){
    pair<int,int> res = make_pair(i0, j0);                  // O(1)
    vector<pair<int,int>> V = vecinos_menores(m, i0, j0);   // O(1)
    while(V.size()>0){                                      // O(|m|*|m[0]|)
        res = V[0];                                         // O(1)
        V = vecinos_menores(m, res.first, res.second);      // O(1)
    }
    return res;                                             // O(|m|*|m[0]|)
}

pair<int, int> encontrar_valle_min_rec(vector<vector<int>> m, int i0, int j0){
    pair<int, int> res = make_pair(i0, j0);
    vector<pair<int,int>> V = vecinos_menores(m, i0, j0);
    for(int i = 0; i<V.size(); i++){
        pair<int, int> p = encontrar_valle_min_rec(m, V[i].first, V[i].second);
        if(m[p.first][p.second] < m[res.first][res.second]){
            res = p;
        }
    }
    return res;
}

bool esValle(vector<vector<int>>m, int i0, int j0){
    bool loEs = true;
    vector<pair<int,int>> vec = vecinos(i0, j0, i0, j0);
    for(int i = 0; i<vec.size(); i++){
        if(m[i0][j0] > m[vec[i].first][vec[i].second]){
            loEs = false;
        }
    }
    return loEs;
}

pair<int, int> encontrar_valle_min_ite(vector<vector<int>> m, int i0, int j0){
    pair<int, int> res = make_pair(i0, j0);
    vector<pair<int,int>> alcanzables;
    alcanzables.push_back(make_pair(i0, j0));
    int proximo = 0;
    while(proximo < alcanzables.size()){                                    // |m|*|m[0]| Iteraciones
        pair<int, int> p = alcanzables[proximo];                            // O(1)
        vector<pair<int,int>> V = vecinos_menores(m, p.first, p.second);    // O(1)
        for(int i = 0; i<V.size(); i++){                                    // 8 iteraciones
            if(!pertenece(alcanzables, V[i])){                              // |m|*|m[0]|
                alcanzables.push_back(V[i]);                                // O(1)
                if(esValle(m, V[i].first, V[i].second)
                && m[V[i].first][V[i].second] < m[res.first][res.second]){  // O(1)
                    res = V[i];
                }
            }
        }
        proximo++;                                                          // O(1)
    }
    return res;                                                             // O(1)
}   // N = |m| * |m[0]| O(N(N+1)/2) -> O(N^2) = O(|m|^2*|m[0]|^2)

// Ejercico de parcial
bool sonFilasBatidas(vector<vector<int>> M){
    bool res = true;
    //ordenar(M[0]);
    int i = 1;
    while(res && i < M.size()){
        //ordenar[M[i]];
        res = res && M[i] == M[0];
        i++;
    }
    return res;
}

// Recorrer una matriz en un ciclo
void recorrerEnOnm(vector<vector<int>> m){
    int i = 0;
    int j = 0;
    while(i<m.size() && j < m[0].size()){
        if(i<m.size()){
            cout << m[i][j] << endl;
        }
        if(j+1 == m[0].size()){
            j = 0;
            i++;
            cout << " ---- " << endl;
        }else{
            j++;
        }
    }
}