#include <iostream>
#include <fstream>
#include <cstring>
#include <map>

using namespace std;

int main() {
    ifstream archivo("pruebas.txt");
    map<string, char> letras;

    if (!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    string contenido;
    string temp;
    
    // Leer todo el contenido del archivo
    while (getline(archivo, temp)) {
        contenido += temp + "\n";
    }

    // Imprimir caracter por caracter
    cout << "Contenido del archivo caracter por caracter:" << endl;
    for (size_t i = 0; i < contenido.size(); ++i) {
        char c = contenido[i];
        if (c == '\n') {
            cout << "\\n" << endl; // Mostrar saltos de línea visiblemente
        } else {
            cout << c << endl;
        }
    }

    archivo.close();
    return 0;
}
