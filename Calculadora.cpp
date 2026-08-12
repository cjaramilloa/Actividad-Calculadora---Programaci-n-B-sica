#include <iostream>
using namespace std;

double suma(double a, double b) { return a + b; }
double resta(double a, double b) { return a - b; }
double multiplica(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double potencia(double base, int exponente) {
    double resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int opcion, exponente;
    double a, b;

    do {
        cout<<"\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Potencia\n6. Salir\n";
        cout<<"Elige una opcion: "; cin>>opcion;

        if(opcion >= 1 && opcion <= 4){
            cout<<"Ingresa dos numeros: "; cin>>a>>b;
        }
        
        switch (opcion) {
            case 1: cout<<"Resultado: "<<suma(a, b); break;
            case 2: cout<<"Resultado: "<<resta(a, b); break;
            case 3: cout<<"Resultado: "<<multiplica(a, b); break;
            case 4:
                if (b != 0) cout << "Resultado: " << divide(a, b);
                else cout << "No se puede dividir entre 0";
                break;
            case 5:
                cout<<"Base: "; cin>>a;
                cout<<"Exponente: "; cin>>exponente;
                cout<<"Resultado: "<<potencia(a, exponente);
                break;
            case 6:
                cout<<"Saliendo...";
                break;
            default:
                cout<<"Opcion invalida";
        }
    } while (opcion != 6);
    return 0;
}
