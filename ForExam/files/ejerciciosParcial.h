#include <iostream>
#include "vector"
#include "tuple"
#include "string"

using namespace std;

#ifndef FOREXAM_EJERCICIOSPARCIAL_H
#define FOREXAM_EJERCICIOSPARCIAL_H

vector<string> kPrimeros(vector< pair<string, int>> a, int k);
vector<int> insertionSort(vector<int> lista);
void swap(vector<int>& lista, int i, int j);
void insert(vector<int>& lista, int i);

string ordenCasual(string pal);
string reconstruir(string pal, vector<char> conteo);
vector<int> contar(string pal);
bool estaLaPalabra(vector<vector<char>> m, string pal);
bool contenida(vector<vector<char>> m, string pal, int i, int j);

bool distinto(vector<int> lista, int elem);
vector<int> subSeq(vector<int> s, int desde, int longitud);
int indiceDeCambio(vector<int> lista);

int tamanioViborita(vector<vector<bool>> m);

#endif //FOREXAM_EJERCICIOSPARCIAL_H
