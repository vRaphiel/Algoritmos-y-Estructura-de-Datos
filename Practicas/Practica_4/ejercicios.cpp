#include "ejercicios.h"

bool divide(vector<int> v, int n){
    int i = 0;
    bool divide = true;
    while(i < v.size()){
        if(v[i]%n!=0){
            divide = false;
        }
        i++;
    }

    return divide;
}

int maximo(vector<int> v){
    int maxNumber = 0;
    for (int i : v) {
        if(i >= maxNumber){
            maxNumber = i;
        }
    }
    return maxNumber;
}

bool pertenece(int elem, vector<int> v){
    bool pertenece = false;
    for (int i : v) {
        if(i==elem){
            pertenece = true;
        }
    }
    return pertenece;
}

void mostrarVector(vector<int> v){
    for (int i : v) {
        cout << "\r" << i << endl;
    }
}

void sinImpares(vector<int>& v){
    for (int & i : v) {
        if(i%2!=0){
            i = 0;
        }
    }
}

vector<int> limpiarDuplicados(vector<int> v){
    vector<int> res;
    bool pertenece = false;
    for (int i = 0; i < v.size(); ++i) {
        if(res.empty()){
            res.push_back(v[0]);
        }else{
            for(int j=0; j<res.size(); j++){
                if(v[i] == res[j]){
                    pertenece = true;
                }
            }
            if(!pertenece){
                res.push_back(v[i]);
            }
            pertenece = false;
        }
    }
    return res;
}

vector<int> rotar(vector<int> v, int k){
    vector<int> res;
    for(int i = 0; i < v.size()-k; i++){
        res.push_back(v[k+i]);
    }
    for(int i = 0; i < k; i++){
        res.push_back(v[i]);
    }
    return res;
}

vector<int> reverso(vector<int> v){
    vector<int> res;
    for(int i = 0; i<v.size(); i++){
        res.push_back(v[(v.size()-1)-i]);
    }
    return res;
}


vector<int> reversoRec(vector<int> v){
    cout << "Implementame!" << endl;

    vector<int> res;
    return res;
}


vector<int> factoresPrimos(int n){
    vector<int> res;
    int divisor = 2;
    while(divisor <= n){
        if(n%divisor==0 && esPrimo(divisor)){
            res.push_back(divisor);
        }
        divisor++;
    }
    return res;
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


bool estaOrdenado(vector<int> v){
    bool estaOrdenado = true;
    for(int i = 0; i < v.size()-1; i++){
        if(v[i] > v[i+1]){
            estaOrdenado = false;
        }
    }
    return estaOrdenado;
}

void negar(vector<bool>& booleanos){
    for (int i = 0; i < booleanos.size(); ++i) {
        booleanos[i] = !booleanos[i];
    }
}

vector<pair<int, int> > cantidadApariciones(vector<int> v){
    vector<pair<int, int> > res;
    bool pertenece = false;
    int pos = 0;
    for(int i = 0; i< v.size(); i++){
        if(res.empty()){
            pair<int, int> pair;
            pair.first = v[i];
            pair.second = 1;
            res.push_back(pair);
        }else{
            for(int j = 0; j<res.size(); j++){
                if(res[j].first == v[i]){
                    pertenece = true;
                    pos = j;
                }
            }
            if(pertenece){
                res[pos].second = res[pos].second + 1;
                pertenece = false;
            }else{
                pair<int, int> pair;
                pair.first = v[i];
                pair.second = 1;
                res.push_back(pair);
            }
        }
    }

    return res;
}




void palindromos(string rutaArchivoIn, string rutaArchivoOut)
{
    ifstream f;
    f.open(rutaArchivoIn);

    ofstream palText;
    palText.open(rutaArchivoOut);


    string line;
    getline(f, line);
    bool coincide = true;

    vector<string> listaPalabras;

    string delimiter = " ";
    size_t pos = 0;
    string token;
    while ((pos = line.find(delimiter)) != std::string::npos) {
        token = line.substr(0, pos);
        listaPalabras.push_back(token);
        line.erase(0, pos + delimiter.length());
    }

    for(string palabra : listaPalabras){
        bool coinciden = true;
        for(int i = 0; i < palabra.size(); i++){
            if(palabra[i] != palabra[palabra.size()-1-i]){
                coinciden = false;
            }
        }

        if(coinciden){
            palText << palabra << " ";
        }
    }

    palText.close();

    f.close();
}

void promedios(string rutaArchivoIn1, string rutaArchivoIn2, string rutaArchivoOut)
{
    cout << "Implementame!" << endl;
}

void cantidadApariciones(string rutaArchivoIn, string rutaArchivoOut)
{
    cout << "Implementame!" << endl;
}

void estadisticas(string rutaArchivo)
{
    cout << "Implementame!" << endl;
}

void interseccion()
{
    cout << "Implementame!" << endl;
}

