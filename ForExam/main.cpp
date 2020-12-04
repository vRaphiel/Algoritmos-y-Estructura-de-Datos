#include <iostream>
#include "test.h"
#include "vector"
#include "files/auxiliares.h"

using namespace std;

void sumarConsecutivos(vector<int>& s){
    int i = 0;
    vector<int> s0 = s;
    while(i<s.size()){
        if(i<s.size()-1){
            s[i+1] = s0[i+1] + s0[i];
        }
        i++;
    }
}

void sumarConsecutivosC2(vector<int>& s){
    int i = s.size()-1;
    vector<int> s0 = s;
    while(i>0){
        s[i] = s0[i] + s0[i-1];
        i--;
    }
    cout << " Traje " << endl;
    cout << i << endl;
}

bool buscarEnZooms(vector<vector<int>>& M, int elem, int& fi, int& co){
    bool esta = false;
    int i = 0;
    int j = 0;
    int n = M.size();
    while(i<n && j < n){
        if(i<M.size() && M[i][j] == elem){
            esta = true;
            fi = i;
            co = j;
        }
        if(j+1 == M[0].size()){
            j = 0;
            i++;
        }else{
            j++;
        }
    }
    return esta;
}

/*
void sumarConsecutivosV2(vector<int>& s){
    int i = 0;
    int prev = s[0];
    vector<int> s0 = s;
    while(i<s.size()-1){
        s[i+1] = s[i+1] + prev;
        i++;
        prev = s[i];
    }
}
 */
/*
void sumarConsecutivosV2(vector<int> &s){
    int i = s.size()-1;
    vector<int> s0 = s;
    while(i >=1){
        s[i] = s0[i] + s0[i-1];
        i--;
    }
}
*/


int main() {

    /*
    caso1();
    caso2();
    caso3();
    caso4();
    caso5();
    caso6();
    caso7();
    caso8();
    caso9Complex();

    cout << " -------------- " << endl;
    int a = 3 / 2;
    cout << a << endl;


    cout << " -------------- " << endl;
    int a = 1 / 2;
    cout << a << endl;

    */

    /*
    vector<int> vec{1,2,3,4,5,6,7};
    sumarConsecutivos(vec);
    printVectorInt(vec);

     */
    vector<vector<int>> zoomeable{
            {-23,-8,67,68,70},
            {-5,-2,1,60,63},
            {2,11,40,45,50},
            {12,13,14,34,37},
            {15,20,25,30,33}
    };
    int fi;
    int co;
    cout << buscarEnZooms(zoomeable, 40, fi, co) << endl;

    return 0;
}
