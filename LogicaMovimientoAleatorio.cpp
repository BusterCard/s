#include "LogicaMovimientoAleatorio.h"

void LogicaMovimientoAleatorio::mover(IPersonaje& personaje, char /*direccion*/) {
    // Generar dirección aleatoria: 'w', 'a', 's', 'd'
    std::srand(std::time(0));
    char direcciones[4] = {'w', 'a', 's', 'd'};
    char randomDir = direcciones[std::rand() % 4];
    personaje.mover(randomDir);
}
