#include <iostream>
#include <limits>

using namespace std;

// Operaciones matemáticas
double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplica(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double potencia(double base, int exponente) {
    double resultado = 1;

    if (exponente < 0) {
        for (int i = 0; i > exponente; i--) {
            resultado *= base;
        }

        return 1 / resultado;
    }

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int opcion;
    int exponente;
    double a, b;

    do {
        cout << "\n===== CALCULADORA =====\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Potencia\n";
        cout << "6. Salir\n";
        cout << "=======================\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        // Comprobar si la opcion ingresada es un numero
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEntrada invalida. Debes ingresar un numero.\n";
            continue;
        }

        switch (opcion) {
            case 1:
                cout << "\nIngresa el primer numero: ";
                cin >> a;

                cout << "Ingresa el segundo numero: ";
                cin >> b;

                cout << "Resultado: " << suma(a, b) << endl;
                break;

            case 2:
                cout << "\nIngresa el primer numero: ";
                cin >> a;

                cout << "Ingresa el segundo numero: ";
                cin >> b;

                cout << "Resultado: " << resta(a, b) << endl;
                break;

            case 3:
                cout << "\nIngresa el primer numero: ";
                cin >> a;

                cout << "Ingresa el segundo numero: ";
                cin >> b;

                cout << "Resultado: " << multiplica(a, b) << endl;
                break;

            case 4:
                cout << "\nIngresa el dividendo: ";
                cin >> a;

                cout << "Ingresa el divisor: ";
                cin >> b;

                if (b == 0) {
                    cout << "Error: no se puede dividir entre 0.\n";
                } else {
                    cout << "Resultado: " << divide(a, b) << endl;
                }
                break;

            case 5:
                cout << "\nIngresa la base: ";
                cin >> a;

                cout << "Ingresa el exponente: ";
                cin >> exponente;

                if (a == 0 && exponente < 0) {
                    cout << "Error: no se puede elevar 0 a un exponente negativo.\n";
                } else {
                    cout << "Resultado: " << potencia(a, exponente) << endl;
                }
                break;

            case 6:
                cout << "\nSaliendo de la calculadora...\n";
                break;

            default:
                cout << "\nOpcion invalida. Elige una opcion del 1 al 6.\n";
        }

    } while (opcion != 6);

    return 0;
}
