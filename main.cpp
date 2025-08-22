// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato

void probarMatematicas()
{
    std::cout << "Bienvenido al programa de matemáticas" << std::endl;
    std::cout << "Ingresa el primer numero" << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num2;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num2;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int numero;
    std::cout << "Ingresa un numero" << std::endl;
    std::cin >> numero;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int base;
    std::cout << "Ingresa una base" << std::endl;
    std::cin >> base;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int exponente;
    std::cout << "Ingresa un exponente" << std::endl;
    std::cin >> exponente;
    std::cin.clear();
    std::cin.ignore(10000, '\n');


    int resultado_suma = sumar(num1, num2); // Funciona
    int resultado_resta = restar(num1, num2); // Funciona3
    int resultado_factorial = factorial(numero);
    int resultado_potencia = potencia(base, exponente);
    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Factorial: " << resultado_factorial << std::endl;
    std::cout << "Potencia: " << resultado_potencia << std::endl;
}

void probarArreglos()
{
    int cantElementos = 10;
    int arreglo[cantElementos]; // Declaración de un arreglo
    llenarArreglo(arreglo, cantElementos);
    std::cout << "Arreglo lleno: ";
    mostrarArreglo(arreglo, cantElementos);
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares(arreglo, cantElementos);
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
}

int main() {
    int opcion;
    do {
        std ::cout << "==MENU PRINCIPAL==" << std::endl;
        std:: cout << "Selecciona una Opcion: "<< std::endl;
        std :: cout << "1. Probar calculadora" << std::endl;
        std :: cout << "2. probar arreglos" << std::endl;
        std:: cout << "3. salir" << std::endl;
        std :: cin >> opcion;
        std :: cin.clear();
        std :: cin.ignore(10000, '\n');

        switch(opcion) {
            case 1:
                probarMatematicas();
                break;
            case 2:
                probarArreglos();
                break;
            case 3:
                std::cout << "Saliendo del programa" << std::endl;
                break;
            default:
                std::cout << "Opcion invalida" << std::endl;
                break;
        }

        if(opcion != 3) {
            std::cout << "\nPresione Enter para continuar" << std::endl;
            std::cin.get();
        }
    } while (opcion != 3);

    return 0;
}
