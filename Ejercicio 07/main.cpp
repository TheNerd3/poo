#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class comida {
public:
    string Comida;
    string condimento;
    int tiempo;

    comida(string _Comida, std::string _condimento, int _tiempo)
        : Comida(_Comida), condimento(_condimento), tiempo(_tiempo) {}
};

bool compararPorTiempo(const comida& comida1, const comida& comida2) {
    return comida1.tiempo < comida2.tiempo;
}

int main() {

    comida comida1("Milanesa.", "Ajo y perejil.", 20);
    comida comida2("Tarta de choclo.", "Sal y pimienta.", 40);
    comida comida3("Ensalada.", "Aceite y vinagre.", 10);

    vector<comida> listaComidas;
    listaComidas.push_back(comida1);
    listaComidas.push_back(comida2);
    listaComidas.push_back(comida3);

    sort(listaComidas.begin(), listaComidas.end(), compararPorTiempo);

    cout << "Comidas ordenadas por tiempo de coccion:"<<endl;
    cout<<"------------------------------------------"<<endl;
    for (const auto& comida : listaComidas) {
        cout << "Comida: " << comida.Comida << endl;
        cout<<"Condimento: " << comida.condimento <<endl;
        cout<<"Tiempo de coccion: " << comida.tiempo << " minutos." << endl;
        cout<<"--------------------------------------"<<endl;
    }

    return 0;
}
