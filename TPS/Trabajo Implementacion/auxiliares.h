//


#ifndef REUNIONESREMOTAS_AUXILIARES_H
#define REUNIONESREMOTAS_AUXILIARES_H

#include "definiciones.h"

using namespace std;
// definir aqui las funciones
pair<int,int> mp(int a, int b);
vector<posicion> ordenar(vector<posicion> &v);
int mod(int a, int b);
int filas(rectangulo t);
int columnas(rectangulo t);
bool esRectangulo(rectangulo r);
bool esToroide(toroide t);
bool sinRepetidos(vector<posicion> s);
float cantidadVivas(toroide t);
float superficieTotal(toroide t);
int vecinosVivos(toroide t, int f, int c);
#endif //REUNIONESREMOTAS_AUXILIARES_H
