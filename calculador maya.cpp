#include <iostream>
using namespace std;

int main() {
    int cantidad;
    int calcularnumeromaya[20];
    int totaldelnivel = 0;

                cout << "\n--------- CALCULADOR MAYA --------" << endl;
                cout << "Ingrese el numero: ";
                cin >> cantidad;

                if (cantidad == 0) {
                    cout << "Numero Maya: 0" << endl;
                    cout << "Residuo: 0" << endl;
                } else {
                    int numero= cantidad;

                    while (cantidad > 0) {
                        int residuo = cantidad % 20;
                        calcularnumeromaya[totaldelnivel] = residuo;
                        cantidad = cantidad / 20;
                        totaldelnivel++;
                    }

                    int numeroMaya = calcularnumeromaya[totaldelnivel - 1];
                    int residuo = calcularnumeromaya[0];

                    cout << "Numero Maya: " << numero<< " / 20 = " << numeroMaya << endl;
                    cout << "Residuo: " << numero << " - (" << numeroMaya << " * 20) = " << residuo << endl;
                }

    return 0;
}