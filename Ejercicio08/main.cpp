#include <iostream>
#include <QCoreApplication>
#include <QDebug>

using namespace std;

// Definición de la clase Persona
class Persona {
public:
    Persona(const QString &nombre) : m_nombre(nombre) {}

    QString nombre() const {
        return m_nombre;
    }

private:
    QString m_nombre;
};

// Definición de la clase Poste
class Poste {
public:
    Poste(double altura, double diametro) : m_altura(altura), m_diametro(diametro) {}

    double altura() const {
        return m_altura;
    }

    double diametro() const {
        return m_diametro;
    }

private:
    double m_altura;
    double m_diametro;
};

// Sobrecarga del operador << para imprimir objetos Persona
ostream& operator<<(ostream &os, const Persona &persona) {
    os << "Persona con nombre: " << persona.nombre().toStdString();
    return os;
}

// Sobrecarga del operador << para imprimir objetos Poste
ostream& operator<<(ostream &os, const Poste &poste) {
    os << "Poste con altura de " << poste.altura() << " metros y " << poste.diametro() << " cm de diametro";
    return os;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Crear objetos de la clase Persona
    Persona persona1("Lucrecia");
    Persona persona2("Juan");

    // Crear objetos de la clase Poste
    Poste poste1(8.0, 15.0);
    Poste poste2(10.0, 20.0);

    // Imprimir descripciones directamente utilizando la sobrecarga del operador <<
    cout << persona1 << std::endl;
    cout << persona2 << std::endl;
    cout << poste1 << std::endl;
    cout << poste2 << std::endl;

    return a.exec();
}
