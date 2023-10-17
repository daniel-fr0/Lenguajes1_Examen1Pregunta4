# Tipo de dato Vector en R3

Este proyecto implementa el tipo de dato vector en R3, con sus respectivas operaciones.
Se sobreescriben los operadores `+`, `-`, `*`, `%`, `&` para realizar las operaciones de suma, resta, producto cruz, producto punto y norma, respectivamente.
Tambien se pueden realizar operaciones con escalares con las operaciones `+`, `-`, `*` por la derecha.


## Como compilar y ejecutar

Para compilar el programa, utilice el makefile:

```bash
	make
```

Para ejecutar el programa, ejecute:

```bash
	./r3
```

## Como ejecutar los tests

Para ejecutar los tests, tiene que tener instalado CMake, si no lo tiene lo puede instalar con el siguiente comando:

```bash
	sudo apt-get install cmake
```

Luego, para ejecutar los tests, ejecute el script `runTests`:

```bash
	./runTests
```

Si desea volver a construir los tests, ejecute el script con la opcion `build`:

```bash
	./runTests build
```

## Como limpiar los archivos generados

Para limpiar los archivos generados, ejecute el makefile con la opcion `clean`:

```bash
	make clean
```

## Como limpiar los archivos generados por los tests

Para limpiar los archivos generados por los tests, ejecute el script `runTests` con la opcion `clean`:

```bash
	./runTests clean
```
