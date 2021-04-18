#include "recursion.h"

/* FIBONACCI */
int fibonacciSucession(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return (fibonacciSucession(n-1) + fibonacciSucession(n-2));
    }
}

int whileFibonacci(int n){
    int aux = 1;
    if(n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        int nesimoItem = 1;
        int nesimoMenosUnoItem = 1;
        int nesimoMenosDosItem = 1;
        int result;

        while(aux <= n){
            if (aux == 1 || aux == 2){
                nesimoItem = 1;
            }else{
                nesimoMenosDosItem = nesimoMenosUnoItem;
                nesimoMenosUnoItem = nesimoItem;
                nesimoItem = nesimoMenosUnoItem + nesimoMenosDosItem;
            }
            aux++;
        }
        result = nesimoItem;
        return result;
    }
}

int forFibonacci(int n){

    int nesimoItem = 0;
    int nesimoMenosUnoItem = 1;
    int nesimoMenosDosItem = 1;
    int result;


    for(int i=0; i<=n;i++){
        if(i == 0){
            nesimoItem = 0;
        }else if(i==1 || i== 2) {
            nesimoItem = 1;
        } else {
            nesimoMenosDosItem = nesimoMenosUnoItem;
            nesimoMenosUnoItem = nesimoItem;
            nesimoItem = nesimoMenosUnoItem + nesimoMenosDosItem;
        }
    }



    result = nesimoItem;
    return result;
}

/* OTRO FIBBONACCI */
int fibonacci_second(int n){

    int actual = 0;
    if(n==0){
        // actual = 0;
    }
    else{
        if(n==1){
            actual=1;
        }
        else{
            int anteriorDelAnterior=0;
            int anterior=1;
            while (n>=2){
                actual = anterior + anteriorDelAnterior;
                anteriorDelAnterior = anterior;
                anterior = actual;
                n--;
            }
        }
    }

    return actual;
}

/* SUMA IMPARES */
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

int sumaImparesWhileN(int n){
    int aux = 0;
    int result = 0;
    while(aux <= n){
        if(aux == 1){
            result = 1;
        }else if((aux%2)!=0){
            result = result + aux;
        }
        aux++;
    }
    return result;
}

int sumaImparesForN(int n){
    int result = 0;
    for(int i=0; i<=n; i++){
        if(i == 1){
            result = 1;
        }else if((i%2)!=0){
            result = result + i;
        }
    }
    return result;
}

/* SUMA DIVISORES */
int sumaDivisores(int n, int k, int suma){
    if(k>n){
        return suma;
    }else{
        if((n%k)==0){
            sumaDivisores(n, (k+1), (suma+k));
        }else{
            sumaDivisores(n, (k+1), suma);
        }
    }
}

int sumaWhileDivisores(int n){
    int aux = 1;
    int result = 0;
    while(aux <= n){
        if((n%aux)==0){
            result = result+aux;
        }
        aux++;
    }
    return result;
}

int sumaForDivisores(int n){
    int aux = 1;
    int result = 0;
    while(aux <= n){
        if((n%aux)==0){
            result = result+aux;
        }
        aux++;
    }
    return result;
}

int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*(n-1);
    }
}

int combinatorio(int n, int k){
    if(n == k || n == 0){
        return 1;
    } else if(k == 1 || k == n - 1){
        return n;
    }else{
        return (combinatorio(n-1, k))+(combinatorio(n-1, k-1));
    }
}

// ES BASTANTE LA VERSION ITERATIVA
