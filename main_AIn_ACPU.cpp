#include <iostream>
#include "Tablero.h"
#include "Camino.h"
#include "Abismo.h"
#include "Salida.h"
#include "Juego.h"
#include "VistaConsola.h"
#include <cstdlib>

// Incluir solo los headers necesarios para las versiones abajo
#include "AvatarCPU.h"
#include "LogicaMovimientoAleatorio.h"
#include "AvatarInnovador.h"
#include "LogicaMovimientoInnovador.h"

int main() {
    // Crear un tablero
    Tablero tablero;
    tablero.cargarDesdeArchivo("dataTablero.txt");

    // ---------- AVATAR CPU ----------
    // Al descomentar las siguientes lineas se hará uso de las funciones de avatar Cpu.
    /*
    AvatarCPU avatarCPU;
    avatarCPU.setPosicionFila(2);
    avatarCPU.setPosicionColumna(2);
    LogicaMovimientoAleatorio logicaAleatoria;
    Juego juego(&tablero, &avatarCPU, &logicaAleatoria, true);

    juego.iniciar();
    VistaConsola vista(&tablero, &avatarCPU);

    do {
        vista.mostrarJuego();
        vista.mostrarMensaje("Digite su movimiento:");
        juego.play(vista.getEntradaConsola());
    } while (juego.getWin() == false && juego.getEstado() == true);

    if (juego.getWin())
        vista.mostrarMensaje("Ganaste el juego, el total de puntos es:" + std::to_string(juego.getPuntaje()));
    else {
        vista.limpiarPantalla();
        vista.mostrarMensaje("Perdiste el juego, el total de puntos es:0");
    }
    */

    // ---------- AVATAR INNOVADOR ----------
    // Al descomentar las siguientes lineas se hará uso de las funciones de avatar Innovador.
    /*
    AvatarInnovador avatarInnovador;
    avatarInnovador.setPosicionFila(2);
    avatarInnovador.setPosicionColumna(2);
    LogicaMovimientoInnovador logicaInnovadora;
    Juego juego(&tablero, &avatarInnovador, &logicaInnovadora, true);

    juego.iniciar();
    VistaConsola vista(&tablero, &avatarInnovador);

    do {
        vista.mostrarJuego();
        vista.mostrarMensaje("Digite su movimiento:");
        juego.play(vista.getEntradaConsola());
    } while (juego.getWin() == false && juego.getEstado() == true);

    if (juego.getWin())
        vista.mostrarMensaje("Ganaste el juego, el total de puntos es:" + std::to_string(juego.getPuntaje()));
    else {
        vista.limpiarPantalla();
        vista.mostrarMensaje("Perdiste el juego, el total de puntos es:0");
    }
    */

    return 0;
}
