#include <iostream>
#include <vector>

using namespace std;

vector<int> subSeq(vector<int> s, int desde, int longitud){
    vector<int> rv;
    int hasta = desde + longitud;
    for(int i = desde; i<hasta; i++){
        int elem = s[i];
        rv.push_back(elem);
    }
    return rv;
}

bool iguales(vector<int> a, vector<int> b){
    bool result = true;
    if(a.size() == b.size()){
        for(int i = 0; i<a.size(); i++){
            if(a[i] != b[i]){
                result = false;
                break;
            }
        }
    }else{
        result = false;
    }
    return result;
}

bool esPar(int i){return (i%2==0);}

// Ej 1
vector<int> copiarSecuencia(vector<int> s){
    int i = 0;
    vector<int> r;
    while (i<s.size()){
        r.push_back(s[i]);
        i++;
    }
    return r;
}

// Ej 3
int cantApariciones(vector<int> s, int e){
    int r = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == e){
            r++;
        }
    }
    return r;
}

// Ej 4
vector<int> esp_one(vector<int> s){
    vector<int> r;
    r = s;
    int i = s.size()-1;
    while(i>= 0){
        s[i] = s[i]*s[i];
        i--;
    }
    return s;
}

void esp_two(vector<int>& s){
    int i = s.size()-1;
    vector<int> r;
    r=s;
    while(i >= 0){
        s[i] = r[i]*r[i];
        i--;
    }
}

// Ej 5
void duplicarElementos(vector<int>& s){
    vector<int> r;
    r = s;
    int i = 0;
    while(i < r.size()){
        s[i] = 2*r[i];
        i++;
    }
}

// Ej 7
bool esPiramide(vector<int> l, int v){
    for(int j = 0; j<l.size()/2; j++){
        l[j] = v + j;
        l[l.size()-1-j] = v+l.size()-j-1;
    }
}

bool piramideHastaI(vector<int> l, int v, int i){

}

void armarPiramide_one(vector<int>& l, int v){
    int i = l.size()/2;

}

// Ej 8
void multiplicar(vector<float>& s){
    int i = s.size()/2;
    vector<float> S0 = s;
    while(i<s.size()){
        s[i] = S0[i]*10;
        s[i+1] = S0[i+1]*10;
        s[s.size()-1-i] = S0[s.size()-1-i]*10;
        s[s.size()-2-i] = S0[s.size()-2-i]*10;
        i=i+2;
    }
}

// Ej 9
void cerearYsumar(vector<int>& s, int& suma){
    vector<int> S0 = s;
    int i = 0;
    while(i<(s.size()/4)){
        suma += S0[2*i] + S0[2*i+1] + S0[s.size()-(2*i)-1] + S0[s.size()-(2*i)-2];
        s[2*i] = 0;
        s[2*i+1] = 0;

        s[s.size()-(2*i)-1] = 0;
        s[s.size()-(2*i)-2] = 0;
        i++;
    }
}

void printVec(vector<int> v){
    cout << " ---------------- PRINTING --------------" << endl;
    for(int i = 0; i<v.size(); i++){
        cout << "Item " << i << ": " << v[i] << " \t";
    }
    cout << " ---------------- FINISHED --------------" << endl;
}


int main() {
    /*
    std::cout << "Hello, World!" << std::endl;
    vector<int> lista = {1,5,1,2,5,7,8,2,5,2,4,3,1,6,7,8};
    int suma = 0;
    printVec(lista);
    cout << "\n" << endl;
    cerearYsumar(lista, suma);
    cout << "suma: " << suma << endl;
    printVec(lista);
     */
    int a = -1;
    int b = 4;
   // cout << (a%b+b)%b << endl;
    cout << a%b << endl;
    return 0;
}

