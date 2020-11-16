#include <iostream>
#include "vector"
#include "tuple"
#include "string"
// Algoritm Insertion Sort reverse

#include "ejerciciosParcial.h"

using namespace std;

void swap(vector<int>& lista, int i, int j){
    int k = lista[i];
    lista[i] = lista[j];
    lista[j] = k;
}

void insert(vector<int>& lista, int i){
    while(i>0 && lista[i] > lista[i-1]){
        swap(lista, i, i-1);
        i--;
    }
}

vector<int> insertionSort(vector<int> lista){
    for(int i = 0; i<lista.size(); i++){
        insert(lista, i);
    }
    return lista;
}

void printVec(vector<int> l){
    cout << " Mi Vector " << endl;
    for(int i = 0; i<l.size(); i++){
        cout << l[i] << "\t";
    }
    cout << " Close my Vector" << endl;
}

void printVecString(vector<string> l){
    cout << " Mi Vector " << endl;
    for(int i = 0; i<l.size(); i++){
        cout << l[i] << "\t";
    }
    cout << "\n Close my Vector" << endl;
}

int main() {
    /*
    vector<int> lisa{5, 2, 4, 7, 8, 2, 9, 5};
    printVec(insertionSort(lisa));

    vector<pair<string, int>> participantes;
    participantes.push_back(make_pair("Fio", 2));
    participantes.push_back(make_pair("Luna", 5));
    participantes.push_back(make_pair("Lucy", 1));
    participantes.push_back(make_pair("Freya", 5));
    participantes.push_back(make_pair("Sophy", 9));
    participantes.push_back(make_pair("Let", 4));

    vector<string> primeros = kPrimeros(participantes, 4);
    printVecString(primeros);

    string palabra = "chocolate";
    string ordenada = ordenCasual(palabra);
    cout << ordenada << endl;
     */

    /*

    vector<vector<char>> sopa{
        {'s', 'e', 'r', 'v', 'i'},
        {'a', 'e', 'y', 'v', 'r'},
        {'s', 'd', 'd', 'v', 's'},
        {'r', 'e', 'a', 'f', 'i'},
        {'z', 'w', 'r', 's', 'e'},
    };

    bool res = estaLaPalabra(sopa, "servi");
    cout << res << endl;


    vector<int> lista{1,7,3,2,4,6};
    int indice = indiceDeCambio(lista);
    cout << indice << endl;
     */
    vector<vector<bool>> tablero{
        {true, true, false, false},
        {false, true, false, false},
        {false, true, true, false},
        {false, false, true, false}
    };

    int tamanio = tamanioViborita(tablero);
    cout << tamanio << endl;

    return 0;
}
