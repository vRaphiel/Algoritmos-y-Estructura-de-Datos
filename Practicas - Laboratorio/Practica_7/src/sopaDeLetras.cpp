#include "sopaDeLetras.h"
#include "vector"

void recorrerHorizontal(vector<char> m, vector<char>& s, int x, int& n){
    if(x - 3 >= 0){
        vector<char> l;
        for(int i = x - 3; i <= x; i++){
            l.push_back(m[x - i]);
        }
        if(l == s){
            n++;
        }
    }
    if(x + 3 < m.size()){
        vector<char> l;
        for(int i = x; i <= x + 3; i++){
            l.push_back(m[i]);
        }
        if(l == s){
            n++;
        }
    }
}

void recorrerVertical(const vector<vector<char>>& m, vector<char>&s, int y, int x, int& n){
    if(y-3 >= 0){
        vector<char> l;
        for(int i = y-3; i<= y; i++){
            l.push_back(m[y-i][x]);
        }
        if(l == s){
            n++;
        }
    }
    if(y+3 < m.size()){
        vector<char> l;
        for(int i = y; i<= y+3; i++){
            l.push_back(m[i][x]);
        }
        if(l == s){
            n++;
        }
    }
}

int sopaDeLetras(vector<vector<char>> m){
    vector<char> sopa{'s','o','p','a'};
    int n = 0;
    for(int i = 0; i<m.size(); i++){
        for(int j = 0; j<m[i].size(); j++){
            if(m[i][j] == 's'){
                //recorrerHorizontal(m[i], sopa, j, n);
                recorrerVertical(m, sopa, i, j, n);
            }
        }
    }
    return n;
}
