#include <iostream>
#include <vector>

using namespace std;

vector<int> functionQueRetornaVector(vector<int> v){
    vector <int> res;
    return res;
}

float promediar(const vector<float> &v){
    float res = 0;
    int i = 0;
    while( i < v.size()) {
        res = res + v[i] / v.size();
        i = i + 1;
    }
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    //vector<int> secuenciaDeEnteros;
    //vector<float> secuenciaDeReales;
    //vector<vector<int>> matrizDeEnteros;
    //vector<int> vector_A;
    //vector<int> vector_B(4); // <0,0,0,0>
    //vector<float> vector_C(4); //<0.0,0.0,0.0,0.0>
    //vector<bool> vector_D(4,true); //<True, True,True,True>

    //function size();
    //int longitud_A = vector_A.size();
    //int lontigud_B = vector_B.size();

    // Modificar longitud
    //push_back() agrega elemento al final
    //vector<int> cuenta;
    //cuenta.push_back(1); //<1>
    //cuenta.push_back(2); //<1,2>
    //cuenta.push_back(3); //<1,2,3>
    //cuenta.push_back(4); //<1,2,3,4>
//
    //for (int i = 0; i < cuenta.size(); ++i) {
    //    cuenta.push_back(i);
    //}

    // pop_back() elimina elementos del final
    //cuenta.pop_back();
    //cuenta.pop_back();


    vector<float> v0(100,1);
    cout << promediar(v0) <<endl;
    cout << v0[0] << endl;

    /**
     * Los elementos se guardan en una porcion de memoria consecutiva reservada dinamicamente durante la ejecicion
     * Si un vector tiene i elementos, y cada uno ocupa s bytes, la cantidad de memoria es ixs bytes
     *
     * ¿Que pasa cuando agregamos un elemento mediante push_back()?
     * El programa verifica que los siguientes s bytes no esten reservados por otra cantidad del programa
     * Si no estan reservados, lo ocupa
     * Si estan reservados, busca otro lugar en memoria donde pueda entrar la nueva dimension del vector
     * -> Busca un nuevo lugar para guardar el vector nuevo ENTERO
     * -> Almacena uno a uno cada vector
     * -> Genera mayor coste de ejecucion en relacion al vector
     * -> C++ no define que ocurre cuando accedemos a posiciones fuera del rango, el comportamiento esta indefinido
     * -> Cuando intento acceder a la posicion mayor, indexa a otra posicion en memoria y trae el dato (En Integer
     *
     * ¿Que pasa si eliminamos elementos de un vector vacio?
     *
     *
     * Precondicion de leer o escribir una posicion [...] es que la posicion haya sido previamente definida
     * Resultados posibles:
     *  correcto
     *  error (excepcion)
     *  puede genrar segmentation fault y terminar la ejecucion
     *  puede colgarse
     *
     *  Si el vector es muy grande, es ideal en que el vector se llame por referencia pues genera menor
     *  tiempo de ejecucion ya que no se copian los valores, no obstante hay que tener en cuenta el modificarlo
     *  Pasar vectores por referencia no es adecuado por ingenieria de software
     *  Usando const, hace que el vector sea solo-lectura
     * **/
    return 0;
}

/**
 * Vectores -> Estructuras de datos para almacenar informacion de manera eficaz, ordenada y prolija
 * Vectores -> seq<T>
 * **/