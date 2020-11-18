#include "ejerciciosParcial.h"

// Ordenar puntajes y personas
void swap(vector< pair<string, int>>& lista, int i, int j){
    pair<string, int> k = lista[i];
    lista[i] = lista[j];
    lista[j] = k;
}

void insert(vector< pair<string, int>>& lista, int i){
    while(i>0 && lista[i].second > lista[i-1].second){
        swap(lista, i, i-1);
        i--;
    }
}

vector< pair<string, int>> insertionSort(vector< pair<string, int>> lista){
    for(int i = 0; i<lista.size(); i++){
        insert(lista, i);
    }
    return lista;
}

vector<string> kPrimeros(vector< pair<string, int>> a, int k){
    vector<string> primeros;
    a = insertionSort(a);
    for(int i = 0; i<k; i++){
        primeros.push_back(a[i].first);
    }
    return primeros;
}

// Palabras Iguales -> Algoritmos con strings
// Order words
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


// Edicion 2
bool palabrasIguales(string p1, string p2){
    bool res = false;
    if(p1.size() == p2.size()){
        res = true;
        vector<int> count(26, 0);
        for(int i = 0; i<p1.size(); i++){
            count[p1[i] - 'a'] += 1;
            count[p2[i] - 'a'] += (-1);
        }

        for(int i = 0; i<count.size(); i++){
            if(count[i] != 0){
                res = false;
            }
        }
    }
    return res;
}

/* SOPA DE LETRAS */
bool contenida(vector<vector<char>> m, string pal, int i, int j){
    bool estaH = true;
    bool estaV = true;
    bool estaD = true;

    // contencion horizontal
    int ini = 0;
    while(j + ini < m.size() && ini < pal.length() && estaH){
        if(m[i][j + ini] != pal[ini]){
            estaH = false;
        }
        ini++;
    }

    // contencion vertical
    ini = 0;
    while(i + ini < m.size() && ini < pal.length() && estaV){
        if(m[i + ini][j] != pal[ini]){
            estaV = false;
        }
        ini++;
    }

    // contencion diagonal
    ini = 0;
    while(j + ini < m.size() && i + ini < m.size() && ini < pal.length() && estaD){
        if(m[i + ini][j + ini] != pal[ini]){
            estaD = false;
        }
        ini++;
    }
    return estaD || estaH || estaV;
}


bool estaLaPalabra(vector<vector<char>> m, string pal){
    bool esta = false;
    for(int i = 0; i<m.size() && !esta; i++){
        for(int j = 0; j<m.size() && !esta; j++){
            if(contenida(m, pal, i, j)){
                esta = true;
            }
        }
    }
    return esta;
}

// Secuencia mas larga

bool distinto(vector<int> lista, int elem){
    bool esDistinto = true;
    for(int i = 0; i<lista.size(); i++){
        if(lista[i] == elem){
            esDistinto = false;
        }
    }
    return esDistinto;
}

vector<int> subSeq(vector<int> s, int desde, int hasta){
    vector<int> rv;
    for(int i = desde; i<hasta; i++){
        int elem = s[i];
        bool esDistinto = distinto(rv, elem);
        if(esDistinto){
            rv.push_back(elem);
        }
    }
    return rv;
}

int indiceDeCambio(vector<int> lista){

    int indice = -1;
    bool encontrado = false;
    if(lista.size()>= 2){
        int low = 0;
        int high = lista.size()-1;
        while(low +1 < high && !encontrado){
            int mid = (low + high)/2;
            vector<int> parteUno = subSeq(lista, 0, mid+1);
            vector<int> parteDos = subSeq(lista, mid+1, lista.size());

            if(parteUno.size() == parteDos.size()){
                indice = mid;
                encontrado = true;
            }else if(parteUno.size() < parteDos.size()){
                low = mid;
            }else{
                high = mid;
            }
        }
    }
    return indice;
}

/* LA VIBORITA */
int tamanioViborita(vector<vector<bool>> m){
    int tamanio = 0;
    int x = 0;
    int y = 0;
    bool encontreInicio = false;

    while(x+1<m.size() && y+1 < m[0].size()){
        if(encontreInicio){
            if(m[x+1][y] && x <= m.size()-1){
                x++;
                tamanio++;
            }else{
                if(y <= m[0].size()-1){
                    y++;
                    tamanio++;
                }
            }
        }else{
            if(m[x][y]){
                encontreInicio = true;
                tamanio++;
            }else{
                if(y == m[0].size()){
                    y = 0;
                    x++;
                }else{
                    y++;
                }
            }
        }
    }

    return tamanio;
}