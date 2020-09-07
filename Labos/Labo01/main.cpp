#include <iostream>
using namespace std;

/* OPERADORES LOGICOS -> Logica de corto circuito */
/* ESTRUCTURAS DE CONTROL */
/* FUNCIONES */
int siguiente(int a){
    return a+1;
}

int siguiente_dos(int a){
    int b = 0;
    b = a + 1;
    return b;
}
/* ESTRUCTURA ALTERNATIVA */
void queso(bool a){
    if(a){
        std::cout << "Esta wea es true" << std::endl;
    }else{
        std::cout << "Esta wea es false" << std::endl;
    }
}

int valorAbsoluto(int n){
    int res = 0;
    if (n>0){
        res = n;
    }else{
        res = -n;
    }
    return res;
}

int suma(int n){
    int i = 1;
    int sum = 0;
    while(i<= n){
        sum = sum + i;
        i = i+1;
    }
    return sum;
}

int sumaRecursiva(int n){
    if(n==0){
        return 0;
    }else{
        return n + suma(n-1);
    }
}


int main() {
/*
    int a = 0;
    int b = 0;
    std::cout << "Ingrese un valor de a" << std::endl;
    std::cin >> a;
    std::cout << "Ingrese un valor de b" << std::endl;
    std::cin >> b;
    int r = 3*b - a;
    std::cout << "El valor de r es " << r << std::endl;

    std::cout << "Ingrese un valor por teclado " << std::endl;
    int x;
    std::cin >> x;
    int r = 1/x;
    std::cout << "Su inverso es " << r << std::endl;

    // declaración de las variables
    float x = 3.0;
    int y = 8;
    int z;
    // operacion
    z = y / x;
    // salida por consola
    std::cout << z;
    return 0;

    float x = 3.0;
    int y = 8;

    bool test  = (x = 5) && (y < 10);
    std::cout << "Test " << test << std::endl;
*/
/*
    bool bul;
    std::cout << "Ingrese el buliano" << std::endl;
    std::cin >> bul;
    queso(bul);
*/
    int a = 0;
    cout << "Ingrese entero" << endl;
    cin >> a;
    int abs_a = valorAbsoluto(a);
    cout << "Valor absoluto de " << a << " es: " << abs_a << endl;
    int b = 15;
    cout << "Valor de la suma es de: " << suma(b) << endl;
    return 0;
}
