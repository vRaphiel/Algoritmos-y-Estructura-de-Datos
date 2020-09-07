#include <iostream>

int f (int x, int y){
    if(x>y){
        return x+y;
    }else{
        return x*y;
    }
}

/*
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
*/

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

int fibonacciSucession(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return (fibonacciSucession(n-1) + fibonacciSucession(n-2));
    }
}

int whileFibonacciSucession(int n){

    int sumaTotal = 0;
    int terminoCero = 0;
    int terminoUno = 1;
    int terminoPrevio = 0;
    int terminoPrevioPrevio = 0;

    if(n>2) {

        int aux = 0;
        while (aux < n) {
            if (aux >= 2) {

            }
        }
        sumaTotal = terminoPrevio + terminoPrevioPrevio;
        return sumaTotal;
    }else{
        if(n==0){
            return terminoCero;
        }else{
            return terminoUno;
        }
    }
}

int sumaImparesN(int n, int k, int suma){
    if(k>n){
        return suma;
    }else{
        if((k%2)!=0){
            sumaImparesN(n, (k+1), (suma+k));
        }else{
            sumaImparesN(n, (k+1), suma);
        }
    }
}

int main() {
    //std::cout << "El resultado es: " << f(2, 10) << std::endl;
    std::cout << "El resultado de la suma de impares es: " << sumaImparesN(10, 1, 0) << std::endl;
    return 0;
}

