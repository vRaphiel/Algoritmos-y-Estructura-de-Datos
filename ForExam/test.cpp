#include "test.h"
#include "files/ejerciciosParcial.h"
#include "sort/sortAlgorithm.h"
#include "files/auxiliares.h"
#include "files/matrices.h"

void caso1(){
    vector<int> lisa{5, 2, 4, 7, 8, 2, 9, 5};
    printVectorInt(insertionSort(lisa));
}

void caso2(){
    vector<pair<string, int>> participantes;
    participantes.push_back(make_pair("Fio", 2));
    participantes.push_back(make_pair("Luna", 5));
    participantes.push_back(make_pair("Lucy", 1));
    participantes.push_back(make_pair("Freya", 5));
    participantes.push_back(make_pair("Sophy", 9));
    participantes.push_back(make_pair("Let", 4));
    vector<string> primeros = kPrimeros(participantes, 4);
    printVectorString(primeros);
}

void caso3(){
    string palabra = "chocolate";
    string ordenada = ordenCasual(palabra);
    cout << ordenada << endl;
}

void caso4(){
    vector<vector<char>> sopa{
            {'s', 'e', 'r', 'v', 'i'},
            {'a', 'e', 'y', 'v', 'r'},
            {'s', 'd', 'd', 'v', 's'},
            {'r', 'e', 'a', 'f', 'i'},
            {'z', 'w', 'r', 's', 'e'},
    };

    bool res = estaLaPalabra(sopa, "servi");
    cout << res << endl;
}

void caso5(){
    vector<int> lista{1,7,3,2,4,6};
    int indice = indiceDeCambio(lista);
    cout << indice << endl;
}

void caso6(){
    vector<vector<bool>> tablero{
            {true, true, false, false},
            {false, true, false, false},
            {false, true, true, false},
            {false, false, true, false}
    };

    int tamanio = tamanioViborita(tablero);
    cout << tamanio << endl;
}

void caso7(){
    cout << " CASO 7 " << endl;
    string s1 = "queso";
    string s2 = "euqso";
    cout << palabrasIguales(s1, s2) << endl;
}

void caso8(){
    vector<vector<int>> matrix{
            {1,2,3,4,5,6,7},
            {1,2,3,4,5,6,7},
            {1,2,3,4,5,6,7},
            {1,2,3,4,5,6,7}};
    recorrerEnOnm(matrix);
}