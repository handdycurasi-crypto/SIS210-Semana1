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

Profundizar los contenidos de la Semana 1 mediante doce nucleos teoricos articulados: concepto de algoritmo; entrada y salida; propiedades; tipos primitivos; fundamentos de los TAD; interfaz e implementacion; ejemplos de TAD; correccion; correccion parcial y total; logica de Hoare; invariantes; y costo computacional con modelo RAM. El proyecto conserva la implementacion ya verificada de `encontrar_maximo` en Python y C++ y compara su crecimiento lineal con un fragmento de dos ciclos anidados de crecimiento cuadratico.

El informe propone cuatro nucleos de preparacion por integrante para facilitar una sustentacion grupal equilibrada. Esta division organiza el estudio, pero el desarrollo explica las conexiones entre los doce nucleos.

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

## Repositorio GitHub

El trabajo está publicado en GitHub y puede consultarse en:

**https://github.com/handdycurasi-crypto/SIS210-Semana1**

El repositorio conserva el código en Python y C++, el informe en LaTeX/PDF, las pruebas y las referencias utilizadas en el trabajo.
