#include <iostream>
using namespace std;

/* Si es de tipo void, sea lo que sea ese espacio en memoria lo va a ocupar hasta que termine el
 * compilado de la funcion */

/** Pasaje de parametros por valor o por copia
 * Coloca en la posicion de memoria del argumento de entrada el valor de la expresion usada en la invocacion
 * Si la funcion modifica el valor, no se llaman las variables en el llamador
 * -> Cambiar valor modifica x pero no modifica la variable del llamador (y) si la funcion es void
 * Declarar la funcion para que retorne valores (tipo nombre(parametros){})
 * **/

/** Pasaje de parametros por referencia **/
/** El ampersen implica referencia -> como es referencia, se referencia al valor de y o al que se le pase como parametro **/
/*
void cambiarValorDos(int &x){
    x = 15;
}
 */

/** Aliasing
 * Una variable es un alias de otra variable si ambas apuntan a la misma porcion de la memoria
 * & permite uindicar que usaremos la referencia en lugar de la copa de la variable
 * -> La funcion recibe una direccion de memoria donde encontrar el argumento
 * -> La funcion puede leer esa posicion de memoria pero tambien puede escribirla
 * -> Todas las asignaciones hechas dentro del cuerpo de la funcion cambian el contenido de la memoria del llamador
 * -> La expresion con la que se realiza la invocacion debe ser necesariamente uuna variable
 * -> Invocacion de la funcion f(x) no f(x+5) o (5)
 * -> Declaracion de la funcion: int f(int &b)
 * **/
/*
int cambiarValor(int x){
    x = 15;
    return x;
}
*/
/** Parametros in, out, inout **/
/** En lenguaje de especificacion tenemos in, out, inout
 * Pal C++ tenemos::
 * in: argumento que se pasa por copia
 * inout: argumento que se pasa por referencia
 * out: argumento que se pase por referencia o el valor de retorno de la funcion
 * **/

void cambiarValor(int &a, int &b){
    // cuando vale a? cuando  vale b? -> 0
    b = 3;
    // cuando vale a? cuando  vale b? -> 3
    a = 4;
    // cuando vale a? cuando  vale b? -> 4
    // Porque? Pues hacen referencia al mismo cacho de memoria
}

int main(){
    //int y = 10;
    //y = cambiarValor(y);
    /** Si se trata de referencias, no hace falta aplicarle a la variable la funcion **/
    //cambiarValorDos(y);
    //cout << "Y:"<< y << endl;
    int c = 0;
    cambiarValor(c,c);
    // Al terminar cambiarValor, c vale 4
    return 0;
}