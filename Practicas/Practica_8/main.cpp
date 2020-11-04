#include "ejercicios.h"

using namespace std;

int main() {

    int n = 0; int hasta = 10000; int paso = 500;
    ofstream fout_ej2;
    fout_ej2.open("datos_ej2.csv");
    fout_ej2 << "n\t" << "tiempo" << endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        bool esta = hayDuplicados(v);
        double t1 = clock();

        double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);

        fout_ej2 << n << "\t" << tiempo << endl;
        n += paso;
    }
    fout_ej2.close();

    ofstream fout_ej1;
    fout_ej1.open("datos_ej1.csv");
    fout_ej1 << "n\t" << "tiempo" << endl;
    long longitud = 2200000000;double c = 0.01; hasta = 10; paso = 10;
    while(c < 11){
        vector<int> v = construir_vector(longitud*c, "azar");
        cout << "Holis" << endl;
        double t0=clock();
        bool esta = hayDuplicados(v);
        double t1 = clock();
        double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);

        fout_ej1 << c << "\t" << tiempo << endl;
        c = c*paso;
    }
    fout_ej1.close();

    ofstream fout_ej4;
    fout_ej4.open("datos_ej4.csv");
    fout_ej4 << "O(1)\t" << "O(n)\t" << "O(n^3)\t" << "O(nLog(n))" << endl;
    n = 100; hasta = 100001; paso = 10;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        v[n-1] = n+1;

        double t0=clock();
        bool esta = hayDuplicados(v);
        double t1 = clock();
        double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);


        n = n*paso;
    }


    fout_ej4.close();

    return 0;
}