#include <iostream>
#include "vector"

using namespace std;

void swap(vector<int>& lista, int i, int j) {
    int m = lista[i];
    lista[i] = lista[j];
    lista[j] = m;
}

void cocktailSort(vector<int>& lista) {
    int j = 0;
    int limit = lista.size();
    int st = -1;
    while (st < limit) {
        st++;
        int value = st % 2;
        if (value == 0) {
            for (int i = 0; i < lista.size() - 1; i++) {
                int aux = i + 1;
                if (lista[i] > lista[aux]) {
                    swap(lista, lista[i], lista[aux]);
                }
            }
        }
        if (value == 1) {
            for (int i = lista.size() - 1; i > 1; i--) {
                int aux = i - 1;
                if (lista[i] > lista[aux]) {
                    swap(lista, lista[i], lista[aux]);
                }
            }
        }
    }
}

// son anagramas

vector<int> contar(string pal){
    vector<int> conteo(25,0);
    for(int i = 0; i<pal.length(); i++){
        int ord = pal[i]-97;
        conteo[ord]++;
    }
    return conteo;
}

string reconstruir(vector<int> conteo){
    string palabra = "";
    for(int i = 0; i<conteo.size(); i++){
        if(conteo[i] != 0){
            char letra = i+97;
            palabra += letra;
            palabra += to_string(conteo[i]);
        }
    }
    return palabra;
}

string ordenCasual(string pal){
    vector<int> cota = contar(pal);
    return reconstruir(cota);
}



bool anagramasOrder(string a, string b){
    bool iguales = true;
    if(a.size() == b.size()){
        a = ordenCasual(a);
        b = ordenCasual(b);
        if(a != b){
            iguales = false;
        }
    }else{
        iguales = false;
    }
    return iguales;
}

int main() {
    /*
    vector<int> queso{1,6,2,5,8,9,2,4,7};
    cocktailSort(queso);
    for (int i = 0; i < queso.size(); i++) {
        cout << i << "\t" << endl;
    }
     */
    string a = "queso";
    string b = "euqso";
    bool sonIguales = anagramasOrder(a,b);
    cout << sonIguales << endl;
    return 0;
}
