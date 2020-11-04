#include <tuple>
#include <set>
#include "vector"
#include "iostream"

using namespace std;

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

void testDiagonal(vector<vector<char>> tateti, char c){
    for(int i = 0; i<tateti.size(); i++){
        for(int j = 0; j<tateti[i].size(); j++){
            if(i==1 && j==1){
                int n = 1;
                recorrerVMov2(tateti, i, j,c,n);
                if(n == 3) cout << "Sape" << endl;
            }
        }
    }
}

vector<int> restarAcumulado(vector<int> s, int x){
    vector<int> res;
    int i = 0;
    int suma = 0;
    while(i<s.size()){
        suma = suma + s[i];
        res.push_back(x - suma);
        i++;
    }
    return res;
}


int main(int argc, char **argv) {

    /*
    cout << " Mi tablero de ajedrez ctm" << endl;

    vector<vector<char>> tateti{
            {'X','O','O'},
            {'X','X','O'},
            {'X','O','X'},
    };

     */
    //testFila(tateti, 'X');
    //testFila(tateti, 'O');
    //testColumna(tateti, 'X');
    //testColumna(tateti, 'O');
    //testDiagonal(tateti, 'X');

    /*
    bool ganoX = false;
    recorrerTablero(tateti, 'X', ganoX);
    if(ganoX) cout << "Gano X" << endl;

    bool ganoO = false;
    recorrerTablero(tateti, 'O', ganoO);
    if(ganoO) cout << "Gano O" << endl;

    if(!ganoX && !ganoO) cout << " Empate " << endl;
     */

    vector<int> vec{1,2,3};
    int x = 3;
    vector<int> res = restarAcumulado(vec, x);
    for(int i = 0; i<res.size(); i++){
        cout << res[i] << endl;
    }

    return 0;
}