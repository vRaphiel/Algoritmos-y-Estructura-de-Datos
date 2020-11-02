#include "definiciones.h"
#include "auxiliares.h"

using namespace std;
// aqui se pueden ubicar todas las funciones auxiliares de soporte para la resolucion de los ejercicios
pair<int,int> mp(int a, int b) {
    return make_pair(a, b);
}

int mod (int a, int b)
{
    if(b < 0) //you can check for b == 0 separately and do what you want
        return -mod(-a, -b);
    int ret = a % b;
    if(ret < 0)
        ret+=b;
    return ret;
}

int filas(rectangulo t){
    return t.size();
}

int columnas(rectangulo t) {
    if (filas(t) > 0) {
        return t[0].size();
    }
    return 0;
}

bool esRectangulo(rectangulo r){
    bool iguales = true;
    if(filas(r)>0 && columnas(r) > 0){
        for(int i = 0; i<r.size(); i++){
            if(r[i].size() != r[0].size()){
                iguales=false;
            }
        }
    }
    return iguales;
}

bool esToroide(toroide t){
    if(filas(t) >= 3 && columnas(t) >= 3 && esRectangulo(t)){
        return true;
    }
    return false;
}

bool sinRepetidos(vector<posicion> s){
    bool hayRepetidos = false;
    for(int i = 0; i<s.size(); i++){
        for(int j=0; j<s.size(); j++){
            if(i!=j && (s[i] == s[j]))
                hayRepetidos = true;
        }
    }
    return hayRepetidos;
}

float cantidadVivas(toroide t){
    float vivas = 0 ;
    for(int i = 0; i<t.size(); i++){
        for(int j = 0; j<t[0].size(); j++){
            if(t[i][j]){
                vivas++;
            }
        }
    }
    return vivas;
}

float superficieTotal(toroide t){
    return filas(t)*columnas(t);
}

int vecinosVivos(toroide t, int f, int c){
    int vivos = 0;
    for(int i = f-1; i<=f+1; i++){
        for(int j = c-1; j<= c+1; j++){
            if((i != f) || (j != c)){
                int i_i = mod(i, t.size());
                int j_j = mod(j, t[0].size());
                if(t[i_i][j_j]){
                    vivos++;
                }
            }
        }
    }
    return vivos;
}




/*
bool enRango(int i, vector<bool> s){
    return (0 <= i < s.size());
}
bool enRangoToroide(int f, int c, rectangulo t){
    vector<bool> m(t.size(), true);
    if(enRango(f,m)){
        if(enRango(c, t[0])){
            return true;
        }
    }
    return false;
}
*/

//No pueden usar esta función para resolver el TPI.
//Tampoco pueden usar iteradores, como usa esta función.
vector<posicion> ordenar(vector<posicion> &v) {
    sort(v.begin(), v.end());
    return v;
}
