#include <iostream>
#include "recursion.h"

using namespace std;

/*
int f (int x, int y){
    if(x>y){
        return x+y;
    }else{
        return x*y;
    }
}

int menorDivisorDesde (int n, int k){
    if(n==k){
        return n;
    }else if(n % k == 0){
        return k;
    }else{
        menorDivisorDesde(n, (k+1));
    }
}

int menorDivisor(int n){
    return menorDivisorDesde(n,2);
}

bool esPrimo(int x){
    if(menorDivisor(x) == x){
        return true;
    }else{
        return false;
    }
}

bool testPrimalidad(int x, int aux){
    if(x==aux){
        return true;
    }else{
        if((x % aux) == 0){
            return false;
        }else{
            testPrimalidad(x, (aux+1));
        }
    }
}

*/

int main() {
    //std::cout << "El resultado es: " << f(2, 10) << std::endl;
    //std::cout << "El resultado de la suma de impares es: " << sumaImparesN(10, 1, 0) << std::endl;

    //int number = 0;
    //cout << "Ingrese un numero para empezar la logica";
    //cin>>number;
    //cout << "Suma hasta " << number << " es " << whileFibonacci(number) << endl;
    //cout << "Suma hasta " << number << " es " << forFibonacci(number) << endl;
    //cout << "Suma hasta " << number << " es " << sumaImparesWhileN(number) << endl;
    //cout << "Suma hasta " << number << " es " << sumaImparesForN(number) << endl;
    //cout << "Suma hasta " << number << " es " << sumaDivisores(number, 1, 0) << endl;
    //cout << "Suma hasta " << number << " es " << sumaWhileDivisores(number) << endl;
    //cout << "Suma hasta " << number << " es " << sumaForDivisores(number) << endl;
    int techo, base;
    cout << "Ingrese techo" << endl;
    cin>> techo;

    cout << "Factorial hasta " << factorial(techo) << endl;

    cout << "Ingrese base" << endl;
    cin>> base;

    cout << "Factorial hasta " << factorial(base) << endl;

    cout << "Combinatorio de: (" << techo << " : " << base << ") " << combinatorio(techo,base) << endl;
    return 0;
}

