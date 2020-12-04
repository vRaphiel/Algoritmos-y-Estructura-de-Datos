#ifndef FOREXAM_COMPLEX_H
#define FOREXAM_COMPLEX_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;

void mostrar_vector(vector<int>& v);
vector<int> construir_vector(int n, string disposicion);

bool hayDuplicados ( vector < int >& v );
bool busqueda_binaria(vector<int> &s, int x);

int indiceUltimaAparicion(vector<int>& v, int elem);



#endif //FOREXAM_COMPLEX_H
