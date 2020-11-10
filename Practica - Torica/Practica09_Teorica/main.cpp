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

int main() {
    vector<int> queso{ 1,6,2,5,8,9,2,4,7 };
    cocktailSort(queso);
    for (int i = 0; i < queso.size(); i++) {
        cout << i << "\t" << endl;
    }
    return 0;
}
