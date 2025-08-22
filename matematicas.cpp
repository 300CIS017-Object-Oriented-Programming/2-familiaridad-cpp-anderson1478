// matematicas.cpp
#include "matematicas.h" // Se incluye a sí mismo

// --- Definiciones (El "cómo") ---
int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    // TODO agregar validacion para que num1 >= num2, sino cambiar el orden para restar num2 - num1
    return num1 - num2;
}

// Ejemplos con arreglos
int llenarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        arreglo[i] = i + 1; // Llena el arreglo con números del 1 al 10
    }
    return 0; // Retorna 0 para indicar éxito
}

int sumarPares(int arreglo[], int tamano)
{
    int suma = 0;
    for (int i = 0; i < tamano; i += 2)
    {
        // Posiciones pares
        suma += arreglo[i];
    }
    return suma;
}

void mostrarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        std::cout << arreglo[i] << " "; // Muestra el elemento en la posición i})
    }

}

int factorial(int numero){
    if (numero == 0)
        return -1;
    if (numero == 1)
        return 1;
    return numero * factorial(numero - 1);

}

int potencia(int base, int exponente) {
    if (exponente == 0)
        return 1;
    if (exponente == 1)
        return base;
    int resultado = 1;
    for (int i = exponente; i > 0; i--) {
        resultado *= base;
    }
    return resultado;
}