#include "sortAlgorithm.h"
#include "vector"
#include "string"
#include <iostream>

using namespace std;

//Swap Function
void swap(vector<int>& lista, int i, int j) {
    int m = lista[i];
    lista[i] = lista[j];
    lista[j] = m;
}

// Bubble Sort
void bubbleSort(vector<int>& lista) {
    for (int i = 0; i < lista.size()-1; i++) {
        for (int j = 0; j < lista.size() -1; j++) {
            if (lista[j] > lista[j+1]) {
                swap(lista, j, j+1);
            }
        }
    }
}

// Insertion Sort
void insertar(vector<int>& lista, int i) {
    while (i > 0 && lista[i] < lista[i - 1]) {
        swap(lista, i, i - 1);
        i++;
    }
}

vector<int> insertionSort(vector<int> lista) {
    for (int i = 0; i < lista.size(); i++) {
        insertar(lista, i);
    }
    return lista;
}

// Selection Sort
void seleccionarMinimo(vector<int>& lista, int i) {
    int posMinimo = i;
    for (int j = i; j < lista.size(); j++) {
        if (lista[posMinimo] > lista[j]) {
            posMinimo = j;
        }
    }
    swap(lista, i, posMinimo);
}

vector<int> selectionSort(vector<int> lista) {
    for (int i = 0; i < lista.size(); i++) {
        seleccionarMinimo(lista, i);
    }
    return lista;
}

// Cocktail Sort
void cocktailSort(vector<int>& lista) {
    int j = 0;
    int limit = lista.size();
    int st = -1;
    while (st < limit) {
        st++;
        int value = st % 2;
        if (value == 0) {
            for (int i = 0; i < lista.size() - 1; i++) {
                int aux = i + 1;
                if (lista[i] > lista[aux]) {
                    swap(lista, lista[i], lista[aux]);
                }
            }
        }
        if (value == 1) {
            for (int i = lista.size() - 1; i > 1; i--) {
                int aux = i - 1;
                if (lista[i] > lista[aux]) {
                    swap(lista, lista[i], lista[aux]);
                }
            }
        }
    }
}

// Counting Sort
vector<int> contar(vector<int>& lista, int COTA) {
    // creo un vector inicializado en 0
    // cuya longitud sea igual a una cota maxima
    vector<int> conteo(COTA, 0);
    for (int i = 0; i < lista.size(); i++) {
        conteo[lista[i]]++;
    }
    return lista;
}

vector<int> reconstruir(vector<int>& lista, vector<int> conteo) {
    vector<int> resultado(lista.size());
    int indice_conteo = 0;
    for (int i = 0; i < lista.size(); i++) {
        // Ignoro valores nulos
        while (conteo[indice_conteo] == 0) {
            indice_conteo++;
        }
        lista[i] = indice_conteo;
        conteo[indice_conteo]--;
    }
    return resultado;
}

// Requiso una cota
vector<int> countingSort(vector<int>& lista, int COTA){
    vector<int> conteo = contar(lista, COTA);
    return reconstruir(lista, conteo);
}