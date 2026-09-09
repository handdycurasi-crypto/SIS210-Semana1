# SIS210 - Semana 1: algoritmos, TAD, correccion y modelo RAM

Trabajo academico grupal de la **Universidad Nacional del Altiplano - Puno**, Escuela Profesional de Ingenieria de Sistemas.

## Datos academicos

- Curso: Algoritmos y Estructuras de Datos - SIS210
- Docente: Zanabria Galvez Aldo Hernan
- Semestre: 2026-II
- Integrantes:
  - Yana Mendoza Carlos Benedicto
  - Belizario Yana David Victor
  - Curasi Zevallos Handdy Ronald

## Objetivo

Profundizar los contenidos de la Semana 1 del curso: concepto y propiedades de los algoritmos, tipos abstractos de datos, correccion parcial y total, logica de Hoare, invariantes de ciclo, costo computacional y modelo RAM. El proyecto implementa y verifica el algoritmo `encontrar_maximo` en Python y C++ y compara su crecimiento lineal con un fragmento de dos ciclos anidados de crecimiento cuadratico.

## Estructura

```text
SIS210-Semana1/
|-- README.md
|-- python/
|   `-- encontrar_maximo.py
|-- cpp/
|   `-- encontrar_maximo.cpp
|-- pruebas/
|   `-- resultados.txt
|-- informe/
|   |-- informe.tex
|   `-- informe.pdf
|-- referencias/
|   |-- referencias.md
|   `-- preguntas_sustentacion.md
`-- .gitignore
```

## Requisitos

- Python 3.10 o posterior.
- Un compilador compatible con C++17, por ejemplo `g++`.
- Para recompilar el informe: pdfLaTeX y una distribucion TeX con los paquetes indicados en `informe.tex`.

## Ejecutar Python

Desde la raiz del proyecto:

```bash
python3 python/encontrar_maximo.py
```

## Compilar y ejecutar C++

Desde la raiz del proyecto:

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic cpp/encontrar_maximo.cpp -o cpp/encontrar_maximo
./cpp/encontrar_maximo
```

## Resultado verificado

Los dos programas utilizan el mismo arreglo de 24 enteros. Ambos obtuvieron `91`, lo contrastaron con una funcion de la biblioteca estandar y mostraron `Verificacion: CORRECTA`. Las salidas completas y el entorno utilizado se encuentran en `pruebas/resultados.txt`.

## Resumen del analisis

`encontrar_maximo` inspecciona cada elemento posterior al primero una sola vez. Por ello realiza `n - 1` comparaciones entre datos y tiene crecimiento lineal. En cambio, el fragmento con dos ciclos de `n` iteraciones ejecuta su cuerpo `n * n = n^2` veces y presenta crecimiento cuadratico. El informe distingue el conteo de instrucciones visibles del conteo expandido que incluye inicializaciones, condiciones e incrementos de los ciclos.

## Compilar el informe

```bash
cd informe
pdflatex -interaction=nonstopmode -halt-on-error informe.tex
pdflatex -interaction=nonstopmode -halt-on-error informe.tex
```

La segunda compilacion actualiza correctamente el indice y las referencias internas.

## Estado del repositorio

La carpeta esta preparada para publicarse, pero **no ha sido subida automaticamente a GitHub**. Antes de publicarla se puede crear un repositorio, copiar su URL en la caratula del informe y realizar el primer `commit`.
