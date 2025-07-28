#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim,duracaoHoras, duracaoMinutos;

    cout << "Hora de inicio: ";
    cin >> horaInicio;
    cout << "Minuto de inicio: ";
    cin >> minutoInicio;
    cout << "Hora de termino: ";
    cin >> horaFim;
    cout << "Minuto de termino: ";
    cin >> minutoFim;
     duracaoHoras = horaFim - horaInicio;
     duracaoMinutos = minutoFim - minutoInicio;
  if (duracaoMinutos < 0) {
        duracaoMinutos += 60;
        duracaoHoras -= 1;
    }
    if (duracaoHoras < 0) {
        duracaoHoras += 24;
    }
    cout << "Duracao jogo: " << duracaoHoras << " hora(s) e " << duracaoMinutos << " minuto(s)." << endl;

    return 0;
}

