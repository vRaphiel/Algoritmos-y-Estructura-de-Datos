#include <iostream>
#include "vector"

using namespace std;

// Ejercicio 1
vector<string>split(string s, char delimit){
    vector<string> sequence;
    int inicio = 0;
    for(int i = 0; i<s.size(); i++){
        string pal = "";
        if(s[i] == delimit){
            for(int j = inicio; j<i; j++){
                pal += s[j];
            }
            inicio = i+1;
            sequence.push_back(pal);
        }else if(i + 1 == s.size()){
            for(int j = inicio; j<s.size(); j++){
                pal += s[j];
            }
            sequence.push_back(pal);
        }
    }
    return sequence;
}

// Ejercicio 2
string darVueltaPalabra(string s){
    char delimiter = ' ';
    vector<string> order = split(s, delimiter);
    string pal = "";
    for(int i = order.size()-1; i>= 0; i--){
        if(i != 0){
            pal += order[i] + ' ';
        }else{
            pal += order[i];
        }
    }
    return pal;
}

//Ejercicio 3
bool subsecuencia(string s, string t){
    int inicio = 0;
    for(int i = 0; i<t.size(); i++){
        if(t[i] == s[inicio]){
            inicio++;
        }
    }
    return inicio==s.size();
}

//Ejercicio 5
bool esPalindromo(string s){
    int i = 0;
    bool loEs = true;
    while(i < s.size() && loEs){
        if(s[i] != s[s.size()-1-i]){
            loEs = false;
        }
        i++;
    }
    return loEs;
}

//Ejercicio 6
int cantidad(string s, char a){
    int cant = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == a){
            cant++;
        }
    }
    return cant;
}

bool tieneRepetidos(string s){
    bool rep = false;
    for(int i = 0; i<s.size() && !rep; i++){
        if(cantidad(s, s[i]) > 0){
            rep = true;
        }
    }
    return rep;
}

// Ejercicio 9
int risaMasLarga(string s){
    int longitud = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'a'){
            if(){}
        }
    }
}

int main() {
    // Test EJ1
    cout << "-------------EJ 1--------------" << endl;
    string s = "la casa esta en orden";
    vector<string> splited = split(s, ' ');
    for(int i = 0; i<splited.size(); i++){
        cout << splited[i] << endl;
    }

    // TEST EJ2
    cout << "-------------EJ 2--------------" << endl;
    string texto = "hola mundo";
    cout << darVueltaPalabra(texto) << endl;

    // TEST EJ3
    cout << "-------------EJ 3--------------" << endl;
    cout << "---TEST A:" << endl;
    string palabra1 = "abcdec";
    string subSeq1 = "ace";
    cout << subsecuencia(subSeq1, palabra1) << endl;
    cout << "---TEST B:" << endl;
    string palabra2 = "abcecde";
    string subSeq2 = "abdc";
    cout << subsecuencia(subSeq2, palabra2) << endl;

    // TEST EJ5
    cout << "-------------EJ 5--------------" << endl;
    string palindromo = "anana";
    cout << esPalindromo(palindromo) << endl;

    // TEST EJ6


    return 0;
}
