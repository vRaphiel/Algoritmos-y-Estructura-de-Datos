#include <tuple>
#include <set>
#include "vector"
#include "iostream"

using namespace std;

vector<int> restarAcumulado(vector<int> s, int x){
    vector<int> res;
    int i = 0;
    int suma = 0;
    while(i<s.size()){
        suma = suma + s[i];
        res.push_back(x - suma);
        i++;
    }
    return res;
}
/* SU TEST */
/*
vector<int> vec{1,2,3};
int x = 3;
vector<int> res = restarAcumulado(vec, x);
for(int i = 0; i<res.size(); i++){
cout << res[i] << endl;
}
*/

bool estaEnSopaDeLetras(vector<vector<char>> m, vector<char> p){
    
}

int main(int argc, char **argv) {





    return 0;
}