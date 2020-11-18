#include "auxiliares.h"
#include "vector"
#include "iostream"
#include "string"

using namespace std;

void printVectorInt(vector<int> l){
    cout << " Mi Vector " << endl;
    for(int i = 0; i<l.size(); i++){
        cout << l[i] << "\t";
    }
    cout << " Close my Vector" << endl;
}

void printVectorString(vector<string> l){
    cout << " Mi Vector " << endl;
    for(int i = 0; i<l.size(); i++){
        cout << l[i] << "\t";
    }
    cout << "\n Close my Vector" << endl;
}