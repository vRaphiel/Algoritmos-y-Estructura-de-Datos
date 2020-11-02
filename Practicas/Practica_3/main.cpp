#include <iostream>
#include <fstream>
using namespace std;

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

void writeIntoFile(int a, int b, float c, float d){
    ofstream fout;
    fout.open("exit.txt");
    fout << a << "," << b << "," << c << "," << d;
    fout.close();
}

void readFromFile(){
    ifstream fin;
    int a;
    float b;
    fin.open("entrada.txt");
    fin >> a;
    fin >> b;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
}

void readVectorFromFile(){
    ifstream fin;
    fin.open("numeros.txt");
    cout << "\n";
    while (!fin.eof() ) {
        int a;
        fin >> a;
        cout << a << " ";
    }
    fin.close();
}

/* SE INDEFINE EL 1/Y siendo 0 el x, y, a*/
void prueba (int &x , int &y ) {
    x = x + y ;
    y = x - y ;
    x = 1/ y ;
}

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void collatz (int n, int &stepQuantity){
    ofstream collatzResult;
    while(n > 1){
        if(n % 2 == 0){
            n = n/2;
            stepQuantity = stepQuantity + 1;
        }else{
            n = (n*3) + 1;
            stepQuantity = stepQuantity + 1;
        }
    }
    cout << stepQuantity;
}

int main() {
    //int number = 0;
    //cout << "Insert a number" << endl;
    //cin >> number;
    //if (isPrime(number)) {
    //    cout << "Number inserted is prime" << endl;
    //} else {
    //    cout << "Number inserted is not prime" << endl;
    //}
    //int a = 0, b= 0;
    //float c = 0, d= 0;
    //cout << "Insert integer value" << endl;
    //cin >> a;
    //cout << "Insert integer value" << endl;
    //cin >> b;
    //cout << "Insert real value" << endl;
    //cin >> c;
    //cout << "Insert real value" << endl;
    //cin >> d;
    //writeIntoFile(a,b,c,d);
    //cout << "Leiendo desde arshivo";
    //readFromFile();
    //readVectorFromFile();
    //int a = 10;
    //prueba(a, a);
    //cout << "Result of prueba is: ";
    //cout << a;
    //int a = 0;
    //int b = 0;
    //cout << "Insert and integer";
    //cin >> a;
    //cout << "Insert and integer";
    //cin >> b;
    //cout << "Here is the swap";
    //cout << a << " - " << b << endl;
    int collNumber = 0;
    cout << "Ingrese un numero de collatz";
    cin >> collNumber;
    collatz(collNumber, 0);
    return 0;
}