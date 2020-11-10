#include "funciones.h"

int minorDivisorFrom (int n, int k){
    if(n==k){
        return n;
    }else if(n % k == 0){
        return k;
    }else{
        minorDivisorFrom(n, (k+1));
    }
}

int minorDivisor(int n){
    return minorDivisorFrom(n,2);
}

bool isPrime(int x){
    if(minorDivisor(x) == x){
        return true;
    }else{
        return false;
    }
}