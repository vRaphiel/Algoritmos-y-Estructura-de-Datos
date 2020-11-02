#include "solucion.h"
#include <tuple>
#include <set>

using namespace std;
// Exercise 1
void printMatrix(vector<vector<int>> matrix){
    for(int i = 0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Exercise 2
int pointProd(vector<int> v1, vector<int> v2){
    int result = 0;
    for(int i=0; i<v1.size(); i++){
        result = result + (v1[i]*v2[i]);
    }
}

bool isQuad(vector<vector<int>> v1){
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

// Exercise 3
vector<vector<int>> reDimensionMatrix(vector<vector<int>> matrix, int n, int m){
    vector<vector<int>> result(m, vector<int>(n,0));
    int index_x = 0;
    int index_y = 0;
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[0].size(); j++){
            result[index_x % m][index_y % n] = matrix[i][j];
            index_y++;
            if(index_y%n==0){
                index_y = 0;
                index_x++;
            }
        }
    }
    return result;
}

// Exercise 4
vector<vector<int>> transpose(vector<vector<int>> &matriz){
    if(isQuad(matriz)){
        transposeMatrix(matriz);
    }
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

// Exercise 5
int countPicks(vector<vector<int>> matriz){
    int res = 0;
    if(matriz.size()>=2 && matriz[0].size()>=2){
        for(int i = 0; i<matriz.size(); i++) {
            for (int j = 0; j < matriz.size(); j++) {
                if (isPick(matriz, i, j)) {
                    res++;
                }
            }
        }
    }
    return res;
}

bool isPick(vector<vector<int>> matriz, int i, int j) {
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

//Exercise 6
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

void transponerDispersa(vector<tuple<int,int,int>> &m){
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j<m.size();j++){
            if(i != j && (get<1>(m[i]) == get<2>(m[j])) && (get<2>(m[i]) == get<1>(m[j]))){
                int n = get<0>(m[i]);
                get<0>(m[i])= get<0>(m[j]);
                get<0>(m[j]) = n;
            }
        }
    }
}

// Exercise 7
vector<vector<float>> temperaturaPromedio(vector<vector<vector<float>>> tensor){
    vector<vector<float>> temp(tensor.size(), vector<float>(tensor[0].size(), 0));
    for(int i = 0; i<tensor.size(); i++){
        for(int j = 0; j<tensor[i].size(); j++){
            temp[i][j] = promedio(tensor[i][j]);
        }
    }
}

vector<float> temperaturaPromedioZona(vector<vector<vector<float>>> tensor){
    vector<float> temp(tensor[0][0].size(), 0);
    int num = tensor.size() * tensor[0].size();
    for(int i = 0; i<tensor[0][0].size(); i++){
        float promedio = 0;
        for(int j = 0; j<tensor.size(); j++){
            for(int k = 0; k < tensor[j].size(); k++){
                promedio = promedio + tensor[j][k][i];
            }
        }
        temp[i] = promedio/num;
    }
    return temp;
}

float promedio(vector<float> prom){
    float promTotal = 0;
    for(int i = 0; i<prom.size(); i++){
        promTotal = promTotal + prom[i];
    }
    return (promTotal/prom.size());
}

// Exercise 8
void elevar (vector<vector<int>>& terreno, int x){
    for(int i = 0; i<terreno.size(); i++){
        for(int j = 0; j<terreno[i].size(); j++){
            terreno[i][j] = terreno[i][j] + x;
        }
    }
}

bool sobresalen(vector<vector<int>> terreno, int n, int& mts){
    int inicio = 0;
    int sePuedeHundir = false;
    int masAlto = valorMasAlto(terreno);

    while(inicio <= masAlto && bajoElAgua(terreno) < n){
        elevar(terreno, -1);
        printMatrix(terreno);
        inicio++;
    }
    if(bajoElAgua(terreno) == n){
        mts = inicio;
        sePuedeHundir = true;
    }
    return sePuedeHundir;
}

int bajoElAgua(vector<vector<int>> terreno){
    int result = 0;
    for(int i = 0; i<terreno.size(); i++){
        for(int j = 0; j < terreno[i].size(); j++){
            if(terreno[i][j]<0){
                result++;
            }
        }
    }
    return result;
}

int valorMasAlto(vector<vector<int>> terreno){
    int masAlto = terreno[0][0];
    for(int i = 0; i<terreno.size(); i++){
        for(int j = 0; j < terreno[i].size(); j++){
            if(masAlto<terreno[i][j]){
                masAlto = terreno[i][j];
            }
        }
    }
    return masAlto;
}

int islas(vector<vector<int>> terreno){
    int islas = 0;
    vector<vector<tuple<int,int>>> aux;
    for(int i = 0; i<terreno.size(); i++){
        for(int j = 0; j<terreno[i].size();j++){
            if(terreno[i][j] != 0 && !perteneceAlTotal(aux, make_tuple(i,j))){
                aux.push_back(esIsla(terreno, i, j));
            }
        }
    }
    islas = aux.size();
    return islas;
}

bool perteneceAlTotal(vector<vector<tuple<int,int>>> listaItems, tuple<int, int> pos){
    bool resultado = false;
    if(!listaItems.empty()){
        for(int i=0; i<listaItems.size(); i++){
            if(pertenece(listaItems[i], pos)){
                resultado = true;
            }
        }
    }
    return resultado;
}

bool pertenece(vector<tuple<int,int>> listaItems, tuple<int,int> pos){
    bool pertenece = false;
    for(int i=0; i<listaItems.size(); i++){
        if(listaItems[i] == pos){
            pertenece = true;
        }
    }
    return pertenece;
}

vector<tuple<int,int>> esIsla(vector<vector<int>> terreno, int x, int y) {
    vector<tuple<int,int>> vectorPos = {make_tuple(x, y)};
    int i = y;
    while(x < terreno.size() && terreno[x][y] == 1){
        if(terreno[x][y+1] == 1){
            while(y < terreno[x].size() && terreno[x][y] == 1){
                if(!pertenece(vectorPos, make_tuple(x,y))){
                    vectorPos.emplace_back(x,y);
                }
                y++;
            }
        }else{
            while(y >= 0 && terreno[x][y] == 1){
                if(!pertenece(vectorPos, make_tuple(x,y))){
                    vectorPos.emplace_back(x,y);
                }
                y--;
            }
        }
        y = i;
        x++;
    }
    return vectorPos;
}

vector<tuple<int,int>> esIsla_aux(vector<vector<int>> terreno, int x, int y, vector<tuple<int,int>>& posiciones) {
    cout << "Pase los if" << endl;
    if (x - 1 >= 0 && x + 1 < terreno.size()) {
        if (y - 1 >= 0 && y + 1 < terreno[0].size()) {
            for(int i = x-1;i < terreno.size(); i++){
                for(int j = y-1; j < terreno[i].size(); j++){
                    cout << "Estoy en los primeros for" << endl;
                    if((i!=x && j!= y) && terreno[i][j] == 1){
                        cout << " i: " << i << " j: " << j << endl;
                        posiciones.emplace_back(i,j);
                        esIsla_aux(terreno, i, j, posiciones);
                    }
                }
            }
        }
    }
}

void dfs(vector<vector<int> >& grid, int x0, int y0, int i, int j, vector<pair<int, int> >& v){

    vector<vector<int> > dirs = { { 0, -1 },
                                  { -1, 0 },
                                  { 0, 1 },
                                  { 1, 0 } };
    int rows = grid.size(), cols = grid[0].size();

    if (i < 0 || i >= rows || j < 0
        || j >= cols || grid[i][j] <= 0)
        return;

    // marking the visited element as -1
    grid[i][j] *= -1;

    // computing coordinates with x0, y0 as base
    v.emplace_back( i - x0, j - y0 );

    // repeat dfs for neighbors
    for (auto dir : dirs) {
        dfs(grid, x0, y0, i + dir[0], j + dir[1], v);
    }
}

int countDistinctIslands(vector<vector<int> >& grid)
{
    int rows = grid.size();
    if (rows == 0)
        return 0;

    int cols = grid[0].size();
    if (cols == 0)
        return 0;

    set<vector<pair<int, int> > > coordinates;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {

            // Icf a cell is not 1
            // no need to dfs
            if (grid[i][j] != 1)
                continue;

            // vector to hold coordinates
            // of this island
            vector<pair<int, int> > v;
            dfs(grid, i, j, i, j, v);

            // insert the coordinates for
            // this island to set
            coordinates.insert(v);
        }
    }
    return coordinates.size();
}

// Exercise 9
void spiralPrint(int m, int n, vector<vector<int>> a)
{
    int i, k = 0, l = 0;

    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

void primerValle(vector<vector<int>> terreno, int i, int j){

}

bool esValle(vector<vector<int>> terreno, int i, int j){
    int n = terreno[i][j];
    bool loEs = true;
    for(int a = i-1; a <= i+1;a++){
        for(int b = i-1; b <= j+1; b++){
            if(a >= 0 && b>= 0 && a < terreno.size() && b<terreno[0].size()){
                if(n > terreno[a][b]){
                    loEs = false;
                }
            }
        }
    }
    return loEs;
}


// Excersice 9 (TaTeTi)
void recorrerFila(
        vector<char> v,
        char c,
        int& n
){
    for(int i = 0; i<v.size(); i++){
        if(v[i] == c) { n++; }
    }
}

void recorrerColumna(
        vector<vector<char>> tateti,
        int y,
        char c,
        int& n){
    int i = 1;
    while((i%tateti.size()) != 0){
        if(tateti[(i%tateti.size())][y] == c){
            n++;
        }
        i++;
    }
}

void recorrerVMov1(vector<vector<char>> tateti, int x, int y, char c, int& n){
    int i = x+1;
    int j = y+1;
    while((i % tateti.size() != x && (j % tateti[0].size() != y))){
        if(tateti[i][j] == c){
            n++;
        }
        i++;
        j++;
    }
}

void recorrerVMov2(vector<vector<char>> tateti, int x, int y, char c, int& n){
    int i = x-1;
    int j = y+1;
    int row = tateti.size();
    int col = tateti[0].size();
    while((i % row != x && (j % col != y))){
        if(tateti[i%row][j%col] != c){
            n = 1;
            break;
        }
        n++;
        i--;
        j++;
    }
}

void recorrerTablero(vector<vector<char>> tateti, char c, bool& status){
    int n = 0;
    bool sigoFila = false;
    for(int i = 0; i<tateti.size(); i++){

        for(int j = 0; j<tateti[i].size(); j++){

            if(i == 0){
                if(tateti[i][j] == c){
                    n = 1;
                    recorrerColumna(tateti, j, c, n);
                    if(n==3) { status=true;break; }
                }
            }

            if(j==0) {
                recorrerFila(tateti[i], c, n);
                if(n==3) { status=true;break; }
            }

            if(i == 1 && j == 1 && tateti[i][j] == c){
                n = 1;
                recorrerVMov1(tateti, i, j, c,n);
                if(n==3) { status=true;break; }
                recorrerVMov2(tateti, i, j, c,n);
                if(n==3) { status=true;break; }
            }

        }
    }
}

void testFila(vector<vector<char>> tateti, char c){
    cout << " -------CON CHAR " << c << "-------- " << endl;
    int n = 0;
    recorrerFila(tateti[0], c,  n);
    cout << " -------Fila 0-------- " << endl;
    cout << "Mi N: " << n << endl;

    n = 0;
    recorrerFila(tateti[1], c,  n);
    cout << " -------Fila 1-------- " << endl;
    cout << "Mi N: " << n << endl;

    n = 0;
    recorrerFila(tateti[2], c,  n);
    cout << " -------Fila 2-------- " << endl;
    cout << "Mi N: " << n << endl;
}

void testColumna(vector<vector<char>> tateti, char c){
    cout << " -------CON CHAR " << c << "-------- " << endl;
    for(int j = 0; j<tateti[0].size(); j++){
        if(tateti[0][j] == c){
            int n = 1;
            recorrerColumna(tateti, j, c, n);
            cout << " -------Columna " << j << "-------- " << endl;
            cout << "Mi N: " << n << endl;
        }
    }
}

int main(int argc, char **argv) {

    cout << " Mi tablero de ajedrez ctm" << endl;

    vector<vector<char>> tateti{
            {'X','O','O'},
            {'X','X','O'},
            {'X','O','O'},
    };

    //testFila(tateti, 'X');
    //testFila(tateti, 'O');

    testColumna(tateti, 'X');
    testColumna(tateti, 'O');

    /*
    bool ganoX = false;
    recorrerTablero(tateti, 'X', ganoX);
    if(ganoX) cout << "Gano X" << endl;

    bool ganoO = false;
    recorrerTablero(tateti, 'O', ganoO);
    if(ganoO) cout << "Gano O" << endl;

    if(!ganoX && !ganoO) cout << " Empate " << endl;
     */


    return 0;
}

//Excersise 9