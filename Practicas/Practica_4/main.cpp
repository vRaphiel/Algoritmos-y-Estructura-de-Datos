#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "ejercicios.h"

using namespace std;

int main() {

    /* Ejercicio 1 */
    /*
    vector<int> v;
    v.push_back(-20);
    v.push_back(30);
    v.push_back(40);
    vector<int> v2 = v;
    v2.push_back(3);
    cout << "Ejercicio 1" << endl;
    cout << divide(v, 10) << endl;
    cout << divide(v2, 10) << endl;
    */

    /* Ejercicio 2 */
    /*
    vector<int> test;
    test.push_back(4);
    test.push_back(5);
    test.push_back(9);
    test.push_back(2);
    cout << "Ejercicio 2" << endl;
    cout << maximo(test) << endl;
    */

    /* Ejercicio 3 */
    /*
    cout << "Ejercicio 3" << endl;
    cout << pertenece(9, test) << endl;
    cout << pertenece(2, test) << endl;
    */

    /* Ejercicio 4 */
    /*
    cout << "Ejercicio 4" << endl;
    mostrarVector(test);
     */
    /* Ejercicio 5*/
    /*
    cout << "Ejercicio 5" << endl;
    sinImpares(test);
    for(int i : test){
        cout << i << endl;
    }
    */

    /* Ejercicio 6*/
    /*
    cout << "Ejercicio 6" << endl;
    test.push_back(9);
    test.push_back(2);
    test.push_back(1);
    test.push_back(5);
    test.push_back(4);
    vector<int> limpio = limpiarDuplicados(test);
    for(int i : limpio){
        cout << i << endl;
    }
    */
    /*  Ejercicio 7 */
    /*
    cout<< "Ejercicio 7" << endl;
    vector<int> aRotar;
    aRotar.push_back(1);
    aRotar.push_back(2);
    aRotar.push_back(3);
    aRotar.push_back(4);
    aRotar.push_back(5);
    aRotar.push_back(6);
    vector<int> rotado = rotar(aRotar, 2);
    for(int i:rotado){
        cout << i << endl;
    }
    */
    /* Ejercicio 8 */
    /*
    cout << "Ejercicio 8" << endl;
    vector<int> vReverso = reverso(aRotar);
    for(int i:vReverso){
        cout << i << endl;
    }
    */
    /* Ejercicio 9 */
    /*
    cout << "Ejercicio 9" <<endl;
    vector<int> nFactorizado = factoresPrimos(6);
    for(int i:nFactorizado){
        cout << i << endl;
    }
    */
    /* Ejercicio 10 */
    /*
    cout << "Ejercicio 10" << endl;
    vector<int> vecOrderer;
    vecOrderer.push_back(1);
    vecOrderer.push_back(2);
    vecOrderer.push_back(3);
    vecOrderer.push_back(4);
    cout << estaOrdenado(vecOrderer) << endl;
    */
    /* Ejercicio 11 */
    /*
    cout << "Ejercicio 11" << endl;
    vector<bool> logicVec;
    logicVec.push_back(true);
    logicVec.push_back(false);
    logicVec.push_back(true);
    logicVec.push_back(false);
    logicVec.push_back(false);
    negar(logicVec);
    for(int i: logicVec){
        cout << i << endl;
    }*/

    /* Ejercicio 12 */
    /*
    cout << "Ejercicio 12" << endl;
    vector<int> vectorConNumeros;
    vectorConNumeros.push_back(1);
    vectorConNumeros.push_back(1);
    vectorConNumeros.push_back(2);
    vectorConNumeros.push_back(1);
    vectorConNumeros.push_back(1);
    vectorConNumeros.push_back(2);
    vectorConNumeros.push_back(3);
    vectorConNumeros.push_back(2);
    vectorConNumeros.push_back(3);
    vectorConNumeros.push_back(3);
    vector<pair<int,int>> apariciones = cantidadApariciones(vectorConNumeros);
    for(pair<int,int>i : apariciones){
        cout << "Pos:" << i.first << " apariciones: " << i.second << endl;
    }
    */

    /* Tanda 2 */

    // ITEM A
    cout << " ITEM 2A " << endl;
    std::string rutaIn =  "../archivos/palindromos.txt";
    std::string rutaOut = "../archivos/soloPalindromos.txt";
    palindromos(rutaIn, rutaOut);

    // ITEM B
    cout << " ITEM 2B " << endl;
    string rutaInOne =  "../archivos/promedios1.txt";
    string rutaInTwo = "../archivos/promedios1.txt";
    string rutaOutProm = "../archivos/promTotal.txt";
    promedios(rutaInOne, rutaInTwo, rutaOutProm);

    // ITEM C
    cout << " ITEM 2C " << endl;

    // ITEM D
    cout << " ITEM 2D " << endl;

    // ITEM E
    cout << " ITEM 2E " << endl;

    return 0;

}