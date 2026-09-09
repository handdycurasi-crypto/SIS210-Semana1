"""Implementacion comentada del algoritmo encontrar_maximo para SIS210."""  # Describe el proposito del archivo.


def encontrar_maximo(arr):  # Define una funcion que recibe una secuencia no vacia.
    """Devuelve el mayor elemento de arr mediante un recorrido lineal."""  # Documenta el resultado de la funcion.
    if len(arr) == 0:  # Comprueba si la secuencia incumple la precondicion de no estar vacia.
        raise ValueError("El arreglo no puede estar vacio")  # Informa claramente el error si no hay elementos.
    maximo = arr[0]  # Toma el primer elemento como maximo provisional.
    for i in range(1, len(arr)):  # Recorre los indices desde el segundo elemento hasta el ultimo.
        if arr[i] > maximo:  # Compara el elemento actual con el mayor encontrado hasta ahora.
            maximo = arr[i]  # Actualiza el maximo solamente cuando aparece un valor mayor.
    return maximo  # Devuelve el mayor valor una vez revisado todo el arreglo.


datos = [34, -7, 12, 56, 23, 91, 4, 18, 67, 45, 0, 39, 72, 11, 8, 63, 27, 50, 16, 5, 88, 31, -12, 70]  # Crea el arreglo de prueba con 24 enteros.
resultado = encontrar_maximo(datos)  # Ejecuta el algoritmo desarrollado y guarda su respuesta.
maximo_real = max(datos)  # Obtiene un valor de referencia con la funcion estandar de Python.
coinciden = resultado == maximo_real  # Verifica si el resultado calculado coincide con la referencia.
print(f"Arreglo ({len(datos)} elementos): {datos}")  # Muestra los datos utilizados en la prueba.
print(f"Maximo calculado: {resultado}")  # Muestra el valor encontrado por el algoritmo.
print(f"Maximo de referencia: {maximo_real}")  # Muestra el valor obtenido mediante la biblioteca estandar.
print(f"Verificacion: {'CORRECTA' if coinciden else 'INCORRECTA'}")  # Comunica si ambas respuestas son iguales.

