#include "complex.h"

using namespace std;

void mostrar_vector(vector<int>& v){
    string vector = "[";
    if(v.size() > 0){
        for(int i=0; i < v.size()-1; i++){
            vector = vector + to_string(v[i]) + ", ";
        }
    }

    if(v.size() != 0){
        vector = vector + to_string(v[v.size()-1]) + "]";
    }else{
        vector = vector + "]";
    }

    cout << vector << endl;
}

vector<int> construir_vector(int n, string disposicion){

    vector<int> res;
    srand (time(NULL));
    int numero;

    if (disposicion == "asc"){
        for(int i=0; i < n; i++){
            res.push_back(i);
        }
    }else if(disposicion == "desc"){
        for(int i=n-1; i >= 0; i--){
            res.push_back(i);
        }

    }else if(disposicion == "azar"){
        for(int i=0; i < n; i++){
            numero = rand() % 100;
            res.push_back(numero);
        }
    }else if(disposicion == "iguales"){
        numero = rand() % 100;
        for(int i=0; i < n; i++){
            res.push_back(numero);
        }
    }else{
        cout << "Disposición no válida" << endl;
    }

    return res;
}

bool hayDuplicados (vector<int>& v){
    bool res = false ; int i = 0; int j = 0;

    while ( i < v . size ()){
        j = 0;
        while ( j < v . size ()){
            if ( i != j && v [ i ] == v [ j ]){
                res = true ;
                return true;
            }
            j ++;
        }
        i ++;
    }

    return res;
}

bool busqueda_binaria(vector<int> &s, int x) {
    int low = 0;
    int high = s.size() -1;
    while( low+1 < high ) {
        int mid = (low+high) / 2;
        if( s[mid] <= x ) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return s[low] == x;
}

int indiceUltimaAparicion(vector<int>& v, int elem){
    int res = -1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            res = i;
        }
    }
    return res;
}

// Pruebas
