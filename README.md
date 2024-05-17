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

Ejercicio 11:
* En un Empty qmake Project
* En la función main crear un objeto de la clase QLabel, uno de QWidget, uno de QPushButton y uno de QLineEdit
* Invocar al método show() de cada uno de estos 4 objetos
* Notar que cada objeto se muestra independiente

Ejercicio 12: 
* En un Empty qmake Project
* En la función main crear un objeto de la clase QLabel y pegarle en el mismo objeto QLabel una imagen de alta resolución.
* Que la imagen se obtenga desde un archivo JPG del disco duro
* Mostrar el QLabel de forma maximizada y que la imagen no se deforme.
* Al cabo de 3 segundos, el QLabel y la aplicación se deberá cerrar

Ejercicio 13: 
* Punto de partida: Usar el código del ejemplo del control de volumen
* Cuando el valor del QSlider se modifique, colocar como título de la ventana el mismo valor que tiene el QSlider.

Ejercicio 14:
* Diseñar un login con QGridLayout.
* Usar asteriscos para la clave.
* Detectar enter para simular la pulsación del botón.
* Definir la clase Formulario que será un QWidget
* Formulario tendrá QLabels y QLineEdits para Legajo, Nombre y Apellido, y un QPushButton
* Si la clave ingresada es admin:1111, se cierra Login y se muestra Formulario
* Si se ingresa otra clave se borrará el texto del QLineEdit de la clave.
------
Continuacion:
* Publicar en la ventana de Login, la temperatura actual en la Ciudad de Córdoba. Usar alguna API disponible.
* Agregar un método en Login que permita mostrar u ocultar la información de la temperatura.
* Además que la ventana de Login tenga como background una imagen descargada de interner, centrada y adaptada en tamaño, sin deformar su aspecto y que permita al usuario que modifique el tamaño del Login y que se siga viendo correctamente la imagen.
* Agregar un método en Login que permita indicar la URL de la imagen que se mostrará en el background. En caso que nunca se invoque a este método, ninguna imagen se mostrará.
-------
Continuacion:
* Agregar la siguiente característica a Login: Si el usuario falla 3 veces la clave, bloquear por 5 minutos a ese usuario.
----
Continuacion:
* Este ejercicio viene de la clase 5, 7 y 8.
* Incorporar la validación de usuarios con QSLite.
* Todo lo que se haga con la base de datos, que se encuentre en la clase AdminDB
* Pueden utilizar SQLiteStudio (https://sqlitestudio.pl) o similar.
-----
Continuacion: 
* Este ejercicio viene de la clase 5, 7, 8 y 12.
* Implementar en AdminDB el uso de MD5 para las claves de los usuarios.
* Acondicionar para que el método utilizado.
