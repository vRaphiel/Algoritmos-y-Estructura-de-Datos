#include <iostream>
#include <fstream>
int main() {
    //std::ofstream fout;
    //fout.open("mi_archivo.txt");
    //fout << 89 << std::endl;
    //fout << 6 << std::endl;
    //fout << 25 << std::endl;
    /* fout representa el lugar donde se va a escribir -> El archivo*/
    //fout.close();
    /* Si el archivo existe reemplaza el contenido, si no, lo crea */

    //char c= 'x';
    //float f = 1.5;
    //bool b = true;
    //std::ofstream datos;
    //fout.open("datos.txt");
    //fout << c << " ";
    //fout << f << " ";
    //fout << b << " ";
    //fout.close();

    /** Para abrir el archivo y modificarlo sin borrar el resto, usamos append
     * Para abrir un archivo en modo append, ofstream.open("archivo.txt", ios_base::app);
     * **/
    //int a;
    //float d;
    //std::ifstream fin;
    // Flujo del archivo en fin
    //fin.open("mi_archivo");
    //fin >> a;
    //fin >> d;
    //fin.close();
    //std::cout << a << std::endl;

    /** Que pasa cuando no conocemos la cantidad de datos que hay en un archivo que tenemos que leer?
     * Usamos eof() end-of-file
     * solo la usamos cuando abrimos un archivo para lectura
     * Ej: leemos una lista de todos los enteros
     * **/

    //std::ifstream fin;
    //fin.open("datos.txt");
    //while (!fin.eof() ) {
    //    int a;
    //    fin >> a;
    //}
    //fin.close();

    /** Manejo de errores, que pasa cuando abrimos un archivo que no existe? O cuando no tenemos los permisos? Cuando no tenemos
     * los permisos para sobreescribir un archivo
     * usamos fail()
     * retorna true si hubo falla
     * **/

    //std::ifstream fina;
    //fina.open("un_archivo.txt");
    //if(fina.fail()){
    //    std:: cout << "Error" << std::endl;
    //}else{
    //    std:: cout << "Abierto" << std::endl;
    //}
    //
    //fin.close();


    //std::ofstream fout;
    //fout.open("datos.txt", std::ios_base::app);
    //fout << 45 << std::endl;
    //fout << 2 << std::endl;
    //fout.close();

    /* Si no inicializamos la variable, ese espacio en memoria es considerado "basura" */
    return 0;

}

/** Entrada y salida de datos desde consola
    -- Salida de datos
    <<std::cout << "Hola mundo" << std::endl;

    --Entrada de archivos
    <<std::cin >> dato;

 **/

/** Entrada y salida de archivos
 * Escribir y leer archivos
 * >> (Guardar texto en el archivo)
 * << (Extraer texto)
 * >> cin, cout son stram
 * Input Stream: flujo de datos que representa una fuente de entrada ej: cin, ifstream (fuente archivo)
 * Output Stream: flujo de datos que representa un destino de salida ej: cout, ofstream (fuente archivo)
 *
 * **/