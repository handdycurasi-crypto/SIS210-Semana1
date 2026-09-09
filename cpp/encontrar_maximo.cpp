#include <algorithm>  // Permite usar max_element para obtener el valor de referencia.
#include <iostream>   // Permite mostrar informacion en la consola.
#include <stdexcept>  // Permite lanzar invalid_argument ante un arreglo vacio.
#include <vector>     // Permite almacenar los numeros en un vector dinamico.

int encontrarMaximo(const std::vector<int>& arr) {  // Recibe el vector por referencia constante y devuelve su maximo.
    if (arr.empty()) {  // Comprueba si el vector incumple la precondicion de no estar vacio.
        throw std::invalid_argument("El arreglo no puede estar vacio");  // Detiene la funcion con un mensaje explicativo.
    }  // Finaliza la validacion de la entrada.
    int maximo = arr[0];  // Toma el primer elemento como maximo provisional.
    for (std::size_t i = 1; i < arr.size(); ++i) {  // Recorre el vector desde el segundo elemento hasta el ultimo.
        if (arr[i] > maximo) {  // Compara el elemento actual con el mayor encontrado hasta ese momento.
            maximo = arr[i];  // Actualiza el maximo cuando el elemento actual es mayor.
        }  // Finaliza la condicion de actualizacion.
    }  // Finaliza el recorrido lineal del vector.
    return maximo;  // Devuelve el mayor valor despues de revisar todos los elementos.
}  // Finaliza la funcion encontrarMaximo.

int main() {  // Inicia el programa de prueba.
    const std::vector<int> datos = {34, -7, 12, 56, 23, 91, 4, 18, 67, 45, 0, 39, 72, 11, 8, 63, 27, 50, 16, 5, 88, 31, -12, 70};  // Crea el vector de prueba con 24 enteros.
    const int resultado = encontrarMaximo(datos);  // Ejecuta el algoritmo desarrollado.
    const int maximoReal = *std::max_element(datos.begin(), datos.end());  // Calcula la referencia con la biblioteca estandar.
    const bool coinciden = resultado == maximoReal;  // Verifica que los dos valores sean iguales.
    std::cout << "Arreglo (" << datos.size() << " elementos): [";  // Inicia la impresion del vector y de su tamano.
    for (std::size_t i = 0; i < datos.size(); ++i) {  // Recorre los elementos exclusivamente para mostrarlos.
        std::cout << datos[i];  // Imprime el elemento ubicado en la posicion actual.
        if (i + 1 < datos.size()) {  // Comprueba si todavia quedan elementos por imprimir.
            std::cout << ", ";  // Separa los elementos mediante una coma y un espacio.
        }  // Finaliza la condicion usada para separar los elementos.
    }  // Finaliza el recorrido de impresion.
    std::cout << "]\n";  // Cierra la representacion del vector y cambia de linea.
    std::cout << "Maximo calculado: " << resultado << '\n';  // Muestra el valor producido por encontrarMaximo.
    std::cout << "Maximo de referencia: " << maximoReal << '\n';  // Muestra el valor obtenido con max_element.
    std::cout << "Verificacion: " << (coinciden ? "CORRECTA" : "INCORRECTA") << '\n';  // Comunica el resultado de la comprobacion.
    return coinciden ? 0 : 1;  // Termina con exito solo cuando ambos resultados coinciden.
}  // Finaliza la funcion principal.

