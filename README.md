# POO
Ejercicio 1: 
* Instalar Qt. Lo cual incluye las herramientas de compilación C++, la biblioteca Qt y Qt Creator.
* Crear un primer programa que muestre por la consola de QtCreator 10 números aleatorios en el intervalo [ 2, 20 ]
* Cada vez que se ejecute el programa, los números deberán ser aleatorios y distintos en cada ejecución.

Ejercicio 3:
* Elija un nombre para su propio espacio de nombres para todo lo que se haga en este asignatura
* Luego de elegido el nombre para su namespace, defina una función dentro de ese namespace para devolver el número de versión junto con la fecha de la última actualización de la biblioteca: QString getVersion();  // Devuelve un texto como "v0.0.1 - 20240318"

Ejercicio 4: 
* Crear un std::vector para contener int
* Cargar 30 valores pseudo aleatorios entre 1 y 15
* Publicar la moda

Ejercicio 5: 
* Crear un std::vector para contener objetos de la clase std::string
* Cargar 5 expresiones idiomáticas, como por ejemplo: pan comido
* Publicar por consola ordenado alfabéticamente

Ejercicio 6: 
* En un Empty qmake Project
* Crear una nueva clase (que no sea Persona, ni Cliente, ni Poste). Invente una clase.
* Agregar uno o más constructores, agregar sus métodos y sus atributos
* Crear algunos objetos de esta clase en la función main

Ejercicio 7: 
* Empty qmake Project
* Utilizar la clase creada en el ejercicio anterior para crear objetos y almacenarlos en un std::vector
* ¿Se pueden ordenar? Qué estrategia utilizaría para ordenarlos de menor a mayor

Ejercicio 8: 
* En un Empty qmake Project
* Crear una función genérica que imprima por consola una descripción de cualquier objeto.
* El mensaje puede ser algo así: "Persona con nombre Lucrecia", "Poste con altura de 8 metros y 15 cm de diámetro".
* Probar esta función en main utilizando dos objetos de la clase Persona y dos objetos de la clase Poste.
* Incluir todo el código fuente en el archivo main.cpp.
* Pedirle al chat el código, interpretarlo y hacerlo funcionar.

Ejercicio 9: 
* En un Empty qmake Project
* Crear una función genérica que imprima por consola sus valores ordenados
* Es decir, se le pasa un array con sus valores en cualquier orden, y la función genérica los imprime ordenados
* Que el prototipo sea: template < class T > void imprimir( T * v, int cantidad, bool mayor_a_menor );
* Utilizar el método de ordenamiento por inserción
* Probar esta función en main utilizando dos arrays (int y float) y ordenar de mayor a menor y el otro al revés.

Ejercicio 10: 
* En un Empty qmake Project
* Crear una clase Jugador con atributos int velocidad, int fuerza y std::string nombre
* Usar constructor inicializando de la manera recomendada la velocidad en 0, fuerza en 0 y nombre "sin nombre"
* Crear los métodos setter y getter para setear y obtener los valores de los atributos
* Incluir el destructor
* En la función main crear un std::vector< Jugador > e insertar 10 jugadores distintos
* Por último, publicar los datos de cada uno de los jugadores con std::cout
