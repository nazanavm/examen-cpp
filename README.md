# Nazareth Navarro Madrigal
|Linea  |       Justificación      | Corrección|
| 8     | Falta el ";"             | Se le añade un ";"|
| 28    | Tenía doble comilla ("") | Se usa comillas simples ('')|
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Jugador {
	string nombre;
	int puntos;
};

void sumarPuntos(Jugador& j, int extra) { // pasar por referencia para modificar al original
    j.puntos += extra;
}

void mostrar(const Jugador& j) {
    cout << j.nombre << ": " << j.puntos << " puntos" << endl;
}

int main() {
    Jugador a;
    a.nombre = "Ana";
    a.puntos = 90;
    char inicial = 'A';

    // Respaldo de Ana antes de modificarla (COPIA)
    Jugador respaldo = a; // copia independiente

    sumarPuntos(a, 10);

    if (a.puntos >= 100) { // >= para incluir 100
        cout << "Puntaje maximo" << endl;
    }

    mostrar(a);
    mostrar(respaldo);

    cout << "Inicial: " << inicial << endl;
    return 0;
}
```
