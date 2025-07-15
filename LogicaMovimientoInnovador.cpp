#include "LogicaMovimientoInnovador.h"

void LogicaMovimientoInnovador::mover(IPersonaje& personaje, char /*direccion*/) {
    // Movimiento zig-zag: alterna entre mover vertical y horizontal
    if (zigzag) {
        personaje.mover('w'); // Arriba
    } else {
        personaje.mover('d'); // Derecha
    }
    zigzag = !zigzag;
}
