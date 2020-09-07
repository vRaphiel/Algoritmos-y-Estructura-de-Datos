#include <iostream>

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

/*
int main(){
    std::cout << "El resultado es: " << f(3, 10) << std::endl;
    std::cout << "El primo: " << testPrimalidad(10,2) << std::endl;
    return 0;
}
 */