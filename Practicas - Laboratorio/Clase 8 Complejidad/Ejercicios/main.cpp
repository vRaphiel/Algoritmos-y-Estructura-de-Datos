#include "ejercicios.h"

using namespace std;
int indiceUltimaAparicion(vector<int>& v, int elem){
    int res = -1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            res = i;
            }
        }
    return res;
}

void ejemploDelVideo(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 0; int hasta = 10000000; int paso = 1000000;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        int indice = indiceUltimaAparicion(v, 1);
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void ejercicio2y3(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 0; int hasta = 20000; int paso = 100;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        int indice = hayDuplicados(v);
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void ejercicio4ComplejidadUno(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 500; int hasta = 100000; int paso = 5000;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        int indice = v[0];
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void ejercicio4ComplejidadLineal(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 500; int hasta = 100000; int paso = 5000;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        vector<int> indice = construir_vector(n, "asc");
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void complejidadNCubo(int n){
    vector<int> a;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){

            }
        }
    }
}

void ejercicio4ComplejidadNCubo(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 0; int hasta = 2000; int paso = 100;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        complejidadNCubo(n);
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void ejercicio4ComplejidadNlogN(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 500; int hasta = 1000000000; int paso = 50000000;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        for(int i=0; i<n; i++) {
            busqueda_binaria(v, 2 * n);
        }
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void ejercicio51(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    int indice = indiceUltimaAparicion(v, 1);
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 500; int hasta = 10000000; int paso = 500000;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        int indice = v.size();
        double t1 = clock();
        cout<<indice;
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

void ejercicio6(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    double t0 = clock();
    double t1 = clock();
    double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
    int n = 5; int hasta = 100; int paso = 1;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        cout<<n<<"\n";
        vector<int> v = construir_vector(n, "azar");
        double t0=clock();
        algunSubconjSuma(v, 115);
        double t1 = clock();
        tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
}

int main() {
    //ejemploDelVideo();
    ejercicio2y3(); //ya cambié que hayDuplicados termine cuando entra uno (Le agregué el return true de la línea 62). Sigue siendo cuadrático.
         // No cambió la complejidad porque el peor caso sigue siendo el mismo. Además estamos usando un vector estrictamente
         // ascendente entonces siempre es el peor caso
    //ejercicio4ComplejidadNCubo();
    //ejercicio6(); //me parece que es exponencial
    return 0;
}