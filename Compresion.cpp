#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream archivo("pruebas.txt"); 

    if (!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    const int TAM = 100;
    char linea[TAM];

    while (archivo.getline(linea, TAM)) {
        cout << linea << endl;
    }

    archivo.close();
    return 0;
}
