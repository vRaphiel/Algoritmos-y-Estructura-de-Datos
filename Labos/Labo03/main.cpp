#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream fout;
    fout.open("../datos.txt");
    fout << 34 << " ";
    fout << 67 << " ";
    fout.close();
    return 0;
}