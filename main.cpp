#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

// Devuelve la suma de precio * cantidad de todos los productos
double calcularSubtotal(const vector<Producto>& productos) {
    double subtotal = 0;
    for (size_t i = 0; i < productos.size(); i++) {
        subtotal += productos[i].precio * productos[i].cantidad;
    }
    return subtotal;
}

// Devuelve el descuento que corresponde al subtotal
double calcularDescuento(double subtotal) {
    return subtotal * 0.10;
}

// Devuelve el impuesto que corresponde a la base
double calcularImpuesto(double base) {
    const double iva = 0.13;
    return base * iva;
}

int main() {
    vector<Producto> productos = {
        {"Teclado", 12500, 2},
        {"Mouse", 6500, 3},
        {"Cable HDMI", 3000, 4},
        {"Webcam", 18000, 1}
    };

    for (size_t i = 0; i < productos.size(); i++) {
        long long linea = productos[i].precio * productos[i].cantidad;
        cout << productos[i].nombre << " x" << productos[i].cantidad
             << " = " << linea << endl;
    }
    }

    double subtotal = calcularSubtotal(productos);
    cout << "Subtotal: " << subtotal << endl;

// Se calcula el descuento, la base, el impuesto y el total.
  descuento = calcularDescuento(subtotal);
  double base = subtotal - descuento;
  double impuesto = calcularImpuesto(base);
  double total = base + impuesto;  
 
    
    
// Luego imprime las lineas Descuento, Impuesto y Total.
    cout << "Descuento: " << descuento << endl;
    cout << "Impuesto:  " << impuesto << endl;
    cout << "Total:     " << total << endl;

    return 0;
}
