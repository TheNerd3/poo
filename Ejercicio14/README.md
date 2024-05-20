Ejercicio 14:
* Diseñar un login con QGridLayout.
* Usar asteriscos para la clave.
* Detectar enter para simular la pulsación del botón.
* Definir la clase Formulario que será un QWidget
* Formulario tendrá QLabels y QLineEdits para Legajo, Nombre y Apellido, y un QPushButton
* Si la clave ingresada es admin:1111, se cierra Login y se muestra Formulario
* Si se ingresa otra clave se borrará el texto del QLineEdit de la clave.
__________________________________________________________________________________
* Publicar en la ventana de Login, la temperatura actual en la Ciudad de Córdoba. Usar alguna API disponible.
* Agregar un método en Login que permita mostrar u ocultar la información de la temperatura.
* Además que la ventana de Login tenga como background una imagen descargada de interner, centrada y adaptada en tamaño, sin deformar su aspecto y que permita al usuario que modifique el tamaño del Login y que se siga viendo correctamente la imagen.
* Agregar un método en Login que permita indicar la URL de la imagen que se mostrará en el background. En caso que nunca se invoque a este método, ninguna imagen se mostrará.
__________________________________________________________________________________
* Agregar la siguiente característica a Login: Si el usuario falla 3 veces la clave, bloquear por 5 minutos a ese usuario.
__________________________________________________________________________________
* Este ejercicio viene de la clase 5, 7 y 8.
* Incorporar la validación de usuarios con QSLite.
* Todo lo que se haga con la base de datos, que se encuentre en la clase AdminDB
* Pueden utilizar SQLiteStudio (https://sqlitestudio.pl) o similar.
__________________________________________________________________________________
* Este ejercicio viene de la clase 5, 7, 8 y 12.
* Implementar en AdminDB el uso de MD5 para las claves de los usuarios.
* Acondicionar para que el método utilizado sea el siguiente:

<iframe
  src="https://carbon.now.sh/embed?bg=rgba%28171%2C+184%2C+195%2C+1%29&t=seti&wt=none&l=auto&width=680&ds=true&dsyoff=20px&dsblur=68px&wc=true&wa=true&pv=56px&ph=56px&ln=false&fl=1&fm=Hack&fs=14px&lh=133%25&si=false&es=2x&wm=false&code=%252F**%250A%2520*%2520Si%2520el%2520usuario%2520y%2520clave%2520son%2520crrectas%252C%2520este%2520metodo%2520devuelve%2520el%2520nombre%2520y%2520%250A%2520*%2520apellido%2520en%2520un%2520QStringList.%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%250A%2520*%252F%250AQStringList%2520AdminDB%253A%253AvalidarUsuario%28%2520QString%2520tabla%252C%2520QString%2520usuario%252C%2520QString%2520clave%2520%29%2520%2520%257B%250A%250A%2520%2520%2520%2520QStringList%2520datosPersonales%253B%250A%250A%2520%2520%2520%2520if%2520%28%2520%21%2520db.isOpen%28%29%2520%29%2520%250A%2520%2520%2520%2520%2520%2520%2520%2520return%2520datosPersonales%253B%250A%250A%2520%2520%2520%2520QSqlQuery%2520*%2520query%2520%253D%2520new%2520QSqlQuery%28%2520db%2520%29%253B%250A%2520%2520%2520%2520QString%2520claveMd5%2520%253D%2520QCryptographicHash%253A%253Ahash%28%2520clave.toUtf8%28%29%252C%2520%250A%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520QCryptographicHash%253A%253AMd5%2520%29.toHex%28%29%253B%250A%250A%2520%2520%2520%2520query-%253Eexec%28%2520%2522SELECT%2520nombre%252C%2520apellido%2520FROM%2520%2522%2520%252B%250A%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520tabla%2520%252B%2520%2522%2520WHERE%2520usuario%2520%253D%2520%27%2522%2520%252B%2520usuario%2520%252B%250A%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2520%2522%27%2520AND%2520clave%2520%253D%2520%27%2522%2520%252B%2520claveMd5%2520%252B%2520%2522%27%2522%2520%29%253B%250A%250A%2520%2520%2520%2520while%28%2520query-%253Enext%28%29%2520%29%2520%2520%257B%250A%2520%2520%2520%2520%2520%2520%2520%2520QSqlRecord%2520registro%2520%253D%2520query-%253Erecord%28%29%253B%250A%250A%2520%2520%2520%2520%2520%2520%2520%2520datosPersonales%2520%253C%253C%2520query-%253Evalue%28%2520registro.indexOf%28%2520%2522nombre%2522%2520%29%2520%29.toString%28%29%253B%250A%2520%2520%2520%2520%2520%2520%2520%2520datosPersonales%2520%253C%253C%2520query-%253Evalue%28%2520registro.indexOf%28%2520%2522apellido%2522%2520%29%2520%29.toString%28%29%253B%250A%2520%2520%2520%2520%257D%250A%250A%2520%2520%2520%2520return%2520datosPersonales%253B%250A%257D%2520"
  style="width: 884px; height: 707px; border:0; transform: scale(1); overflow:hidden;"
  sandbox="allow-scripts allow-same-origin">
</iframe>
